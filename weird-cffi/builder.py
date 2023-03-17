from cffi import FFI


CDEF = '''
int add_c(int, int);
'''

ffibuilder = FFI()
ffibuilder.cdef(CDEF)
ffibuilder.set_source(
    '_add_lib',
    '''
    #include "add.h"
    ''',
    include_dirs=['.'],
    sources=['add.c']
)
ffibuilder.compile(verbose=True)
