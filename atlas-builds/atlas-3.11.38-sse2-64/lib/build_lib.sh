# Run in msys2 in order to pick up mingw-w64 gcc
GCC=gcc
$GCC -m64 -shared \
   -static \
   -o numpy-atlas.dll -Wl,--output-def=numpy-atlas.def \
   -Wl,--whole-archive liblapack.a libf77blas.a libcblas.a libatlas.a \
	-Wl,--no-whole-archive \
	 -lgfortran -lgcc -lkernel32 -lm -lgcc -lpthread -lquadmath
