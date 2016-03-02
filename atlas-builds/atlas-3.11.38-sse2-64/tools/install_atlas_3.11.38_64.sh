# Must be unix line endings
# In vim - set ff=unix
# Turn off CPU throttling
# Control panel, Hardware and sound, Power options, Select a power plan, Show
# additional plans, High perfornamce
code_home="/cygdrive/d/code"
archive_path="${code_home}/archives"
lapack_tarfile="${archive_path}/lapack-3.5.0.tgz"
# atlas_ver="3.11.26"
atlas_ver="3.11.38"
build_suff="-64-sse2-full"
# See: https://github.com/math-atlas/math-atlas/wiki/ATLAS-configure-step
# -b <32/64> : set pointer bitwidth
# -Si archdef <1/0> : enable/supress arch default use
# -A <enum MACHTYPE #> : set machine/architecture
# -V #    # = ((1<<vecISA1) | (1<<vecISA2) | ... | (1<<vecISAN))
# Warning - these configure options may well depend on your ATLAS version; in
# particular the <enum> and -V values are likely to change. Check with:
#   tar atlas3.11.38.tar.bz2
#   cd ATLAS
#   mkdir build
#   cd build
#   ../configure bad-arg
#   make xprint_enums ; ./xprint_enums 
#
# The values here may correspond to MACHTYPE='x86SSE2', V flags SSE2 | SSE1
config_opts="-b 64 -Si archdef 0 -A 15 -V 768 \
    --with-netlib-lapack-tarfile=${lapack_tarfile} \
    -Fa al '-mfpmath=sse -msse2' \
    -t 1"

# You usually don't need to change these guys
atlas_home="${code_home}/atlas"
atlas_sdir=atlas-${atlas_ver}
atlas_src=$atlas_home/$atlas_sdir
atlas_build="$atlas_home/atlas-${atlas_ver}-build${build_suff}"
atlas_tar="${archive_path}/atlas${atlas_ver}.tar.bz2"

# doit
rm -rf $atlas_src
rm -rf $atlas_build
mkdir -p $atlas_build
# Copy this file into the build directory
if [[ -e "$0" ]]; then
    cp $0 $atlas_build
fi
cd $atlas_home
tar jxvf "$atlas_tar"
mv ATLAS ${atlas_src}
cd $atlas_build
export LDFLAGS='-static'
${atlas_src}/configure ${config_opts}
make build
