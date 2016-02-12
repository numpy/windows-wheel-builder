import shutil
import sys
from os.path import join as pjoin
from glob import glob

from delocate.wheeltools import InWheel


def main():
    lib_path = sys.argv[1]
    wheel_fnames = glob(pjoin('dist', '*.whl'))

    for fname in wheel_fnames:
        print('Processing', fname)
        with InWheel(fname, fname):
            shutil.copy2(lib_path, pjoin('numpy', 'core'))
