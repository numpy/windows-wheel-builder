Building 64-bit ATLAS 3.11.38 library
=====================================

You'll need Cygwin with gcc C and Fortran compilers.  I was using gcc 5.3.0,
from a Cygwin updated on 1 Feb 2016.

Do _not_ install the 64-bit mingw compilers (x86_64-mingw...) into your Cygwin
installation, ATLAS will try and use them for compiling, and they don't work
for ATLAS compilation.

You will need the mingw compilers later, but install separately via ``msys2``.

Compile ATLAS library, see: ``install_atlas_3.11.38_64.sh``.

This script builds ATLAS without threads (``-t 1`` flag).  The ATLAS build
machinery for 3.11.38 breaks on Cygwin for multi-threaded builds.

Then start up the 64-bit shell of msys2, and run ``build_lib.sh`` in the
``lib`` directory of the ATLAS build, to make ``numpy-atlas.dll`` and
``numpy-atlas.def``.

Finally, build ``numpy-atlas.lib`` with the MSVC ``lib`` command::

    lib /def:numpy-atlas.def /out:numpy-atlas.lib /machine:x64
