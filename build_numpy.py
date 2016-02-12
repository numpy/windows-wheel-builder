""" Build numpy wheels
"""

import sys
import os
from os.path import abspath, dirname, join as pjoin
import shutil
from subprocess import check_call

BUILD_STUFF = dirname(__file__)

def main():
    numpy_path = sys.argv[1]
    os.chdir(abspath(numpy_path))
    check_call(['git', 'clean', '-fxd'])
    check_call(['git', 'reset', '--hard'])
    patch_file = pjoin(BUILD_STUFF, '1.10.4-init.patch')
    check_call(['git', 'apply', patch_file])
    shutil.copy2(pjoin(BUILD_STUFF, 'site.cfg'), '.')
    shutil.copy2(pjoin(BUILD_STUFF, '_distributor_init.py'), 'numpy')
    check_call(['python', 'setup.py', 'bdist_wheel'])
    check_call(['python',  pjoin(BUILD_STUFF, 'add_library.py')])


if __name__ == '__main__':
    main()
