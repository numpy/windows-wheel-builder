GCC=i686-pc-mingw32-gcc
$GCC -fomit-frame-pointer -mfpmath=sse -O2 -msse2 -m32  -shared \
   -static \
   -o libsatlas.dll -Wl,--output-def=libsatlas.def \
   -Wl,--whole-archive liblapack.a libf77blas.a libcblas.a libatlas.a \
	-Wl,--no-whole-archive \
	 -lgfortran -lgcc -lkernel32 -lm -lgcc
