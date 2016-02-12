Building ATLAS library
======================

You'll need Cygwin compilers, with mingw32 compilers also installed via Cygwin.

Compile library, see: ``install_atlas_32_static.sh``.

The ``-static`` commands in that file are probably not necessary.

Then run ``build_lib.sh`` in the ``lib`` directory of the ATLAS build.

Build lib file
==============

Using MSVC ``lib`` command::

    lib /def:satlas.def /out:satlas.lib /machine:x86
