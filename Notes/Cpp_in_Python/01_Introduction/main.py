import ctypes
import os
dir_path = os.path.dirname(os.path.realpath(__file__))

cLibrary = ctypes.CDLL(dir_path+"\cLibrary.so");
# CDLL is the C dynamically linked library
# we will given the path of the c shared library

# calling c function inside python
cLibrary.display(b"harry",35)
# in c we can't pass the 'string' type argument, first we have to convert it into the binary string
# we have to convert into binary because in python string is immutable but in c/c++ string is mutable

# another way to call the function:
display = cLibrary.display
# here we assign the function
# now here we will give the type of argument that the 'display' function take
display.argtypes = [ctypes.c_char_p, ctypes.c_int]
# calling the function
display(b"harry",35)

# getting 'sum' function as well
sum = cLibrary.sum
sum.argtypes = [ctypes.c_int,ctypes.c_int]
# specifying the return type
sum.restype = ctypes.c_int
print(sum(1,2))

# calling c++ function