import shutil
import sys
from os.path import join as pjoin
from glob import glob
from zipfile import ZipFile

from delocate import wheeltools

def my_zip2dir(zip_fname, out_dir):
    with open(zip_fname, 'rb') as fobj:
        zip = ZipFile(fobj)
        zip.extractall(path=out_dir)


# Monkeypatch wheeltools
wheeltools.zip2dir = my_zip2dir


def main():
    lib_path = sys.argv[1]
    dist_path = sys.argv[2] if len(sys.argv) > 2 else 'dist'
    wheel_fnames = glob(pjoin(dist_path, '*.whl'))

    for fname in wheel_fnames:
        print('Processing', fname)
        with wheeltools.InWheel(fname, fname):
            shutil.copy2(lib_path, pjoin('numpy', 'core'))


if __name__ == '__main__':
    main()
