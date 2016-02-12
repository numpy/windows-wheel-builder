# Must be unix line endings
# In vim - set ff=unix
# Turn off CPU throttling
# Control panel, Hardware and sound, Power options, Select a power plan, Show
# additional plans, High perfornamce
code_home="/cygdrive/d/code"
archive_path="${code_home}/archives"
lapack_tarfile="${archive_path}/lapack-3.5.0.tgz"
# atlas_ver="3.11.26"
atlas_ver="3.10.1"
build_suff="-32-sse2-full-explicit-static"
# build_suff="-cygwin-mingw"
# config_opts="-b 32"
config_opts="-b 32 -Si archdef 0 -A 13 -V 384 \
    --with-netlib-lapack-tarfile=${lapack_tarfile} \
    -Fa al '-mincoming-stack-boundary=2 -mfpmath=sse -msse2'
    -Fa if '-mincoming-stack-boundary=2 -mfpmath=sse -msse2 -static'"
# config_opts="-b 64 -V 384 --with-netlib-lapack-tarfile=${lapack_tarfile}"

# usually don't need to change these guys
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
