GCC=x86_64-w64-mingw32-gcc.exe 
$GCC -fomit-frame-pointer -mfpmath=sse -O2 -msse2 -m64  -shared \
   -static \
   -o numpy-atlas.dll -Wl,--output-def=numpy-atlas.def \
   -Wl,--whole-archive liblapack.a libf77blas.a libcblas.a libatlas.a \
	-Wl,--no-whole-archive \
	 -lgfortran -lgcc -lkernel32 -lm -lgcc -lpthread -lquadmath
