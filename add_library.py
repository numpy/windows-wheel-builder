try:
    from ConfigParser import SafeConfigParser
except ImportError:
    from configparser import SafeConfigParser

import shutil
from os.path import pathsep, join as pjoin, abspath
from glob import glob
from delocate.wheeltools import InWheel

parser = SafeConfigParser()
if len(parser.read('site.cfg')) == 0:
    raise RuntimeError('Could not read site.cfg file')
lib_path = parser.get('atlas', 'library_dirs').split(pathsep)
lib = parser.get('atlas', 'atlas_libs').split(',')
if len(lib_path + lib) > 2:
    raise RuntimeError('Too many library paths or libraries')
lib_path = abspath(pjoin(lib_path[0], lib[0] + '.dll'))

wheel_fnames = glob(pjoin('dist', '*.whl'))

for fname in wheel_fnames:
    print('Processing', fname)
    with InWheel(fname, fname):
        shutil.copy2(lib_path, pjoin('numpy', 'core'))
