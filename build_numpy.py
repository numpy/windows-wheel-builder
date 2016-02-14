""" Build numpy wheels
"""

import sys
import os
from os.path import abspath, dirname, join as pjoin
import shutil
from subprocess import check_call
from platform import architecture

import patch

BUILD_STUFF = abspath(dirname(__file__))

LIB_NAME = 'numpy-atlas'

SITE_CFG_TEMPLATE = r"""
[atlas]
include_dirs = {atlas_path}\include
library_dirs = {atlas_path}\lib
atlas_libs = {lib_name}
lapack_libs = {lib_name}
"""

ATLAS_PATH_TEMPLATE = r'{repo_path}\atlas-builds\atlas-3.10.1-sse2-{n_bits}'


def get_bitness():
    bits, _ = architecture()
    return '32' if bits == '32bit' else '64' if bits == '64bit' else None


def main():
    argc = len(sys.argv)
    numpy_path = sys.argv[1] if argc > 1 else os.getcwd()
    n_bits = sys.argv[2] if argc > 2 else get_bitness()
    if n_bits not in ('32', '64'):
        raise RuntimeError("Number of bits should be 32 or 64")
    os.chdir(abspath(numpy_path))
    check_call(['git', 'clean', '-fxd'])
    check_call(['git', 'reset', '--hard'])
    patch_file = pjoin(BUILD_STUFF, '1.10.4-init.patch')
    patch_set = patch.fromfile(patch_file)
    patch_set.apply()
    atlas_path = ATLAS_PATH_TEMPLATE.format(repo_path=BUILD_STUFF,
                                          n_bits=n_bits)
    with open('site.cfg', 'wt') as fobj:
        fobj.write(SITE_CFG_TEMPLATE.format(atlas_path=atlas_path,
                                            lib_name=LIB_NAME))
    shutil.copy2(pjoin(BUILD_STUFF, '_distributor_init.py'), 'numpy')
    check_call(['python', 'setup.py', 'bdist_wheel'])
    check_call(['python',  pjoin(BUILD_STUFF, 'add_library.py'),
                atlas_path + r'\\lib\\' + LIB_NAME + '.dll'])


if __name__ == '__main__':
    main()
