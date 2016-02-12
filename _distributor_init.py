""" Inialization specific to Windows ATLAS SSE2 build
"""

from os.path import join as pjoin, dirname

# Add check for SSE2 on Windows
try:
    from ctypes import windll, wintypes
except (ImportError, ValueError):
    pass
else:
    has_feature = windll.kernel32.IsProcessorFeaturePresent
    has_feature.argtypes = [wintypes.DWORD]
    if not has_feature(10):
        msg = ("This version of numpy needs a CPU capable of SSE2, "
                "but Windows says that is not so.\n",
                "Please reinstall numpy using a different distribution")
        raise RuntimeError(msg)

# Load the library
from ctypes import cdll
cdll.LoadLibrary(pjoin(dirname(__file__), 'core', 'numpy-atlas.dll'))
