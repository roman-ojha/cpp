import ctypes

"""
    -> C/C++ have different type of data type and it is statically type language
    -> where we can't be able to change the tye letter
    -> where the other hand we can change the type of variable in python letter
    -> so to work with C we need to bring those ctype into python
"""
import os
dir_path = os.path.dirname(os.path.realpath(__file__))

cLibrary = ctypes.CDLL(dir_path + "\cLibrary.so")


# so another way to call the function is to first declare the function and then call
python_add = cLibrary.add
python_add.argtypes = [ctypes.c_int, ctypes.c_int]
python_add.restype = int

print(python_add(1, 2))

cLibrary.display(b"Hello world")
# in c we can't pass the 'string' type argument, first we have to convert it into the binary string
# we have to convert into binary because in python string is immutable but in c/c++ string is mutable

# another way to handle string type:
string = ctypes.c_char_p(b"hello world")
print(string)  # Memory location: c_char_p(1542134460064)
cLibrary.display(string)

# Memory:
# CPP:
# -> in cpp we can declare the type of variable because of that we can change the value that we previously stored into the same memory location
# -> because of that c variables are mutable
# Python:
# -> but in case of python we don't declare the type of variable because of that if we will try to change the value of that variable it will store the new value to new memory location and reference that variable to that memory location
# -> because of that python variables are immutables
# -> so while working with c/c++ pointer in python we have to be vary careful

# to change the value of ctypes
string.value = b"Roman"
print(string)  # Memory Location: c_char_p(1542134460496)
cLibrary.display(string)

# there is a way to make ctype variable mutable in python
string = ctypes.create_string_buffer(b"Hello World")
# this will automatically create the string buffer of a size that will accommodate that string

# Another way is to specify the size of string buffer that you want
string = ctypes.create_string_buffer(size=100, init=b"Hello world")
print(string)  # Memory Location: <ctypes.c_char_Array_100 object at 0x000001846D2E5D40>
cLibrary.display(string)
# changing the value
string.value = b"Roman"
print(string)  # Memory Location: <ctypes.c_char_Array_100 object at 0x000001846D2E5D40>
cLibrary.display(string)
