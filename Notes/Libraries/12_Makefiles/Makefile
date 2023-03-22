# <executable_output_file>: <compiled_object_files>
math: math_utils.o main.o
# here we are linking the object files
# -o <destination_object_file>
# now here we will specify the object files that we want to link and create the 'math' file
	g++ math_utils.o main.o -o math
# now we have specify the object linker

# we now have to specify from where these object files are to be compiled
math_utils.o: math_utils.cpp # so here we will get 'math_utils.o' from 'math_utils.cpp'
# now we have to specify the command how we can generate the 'math_utils.o' file from 'math_utils.cpp'
	g++ -c math_utils.cpp

main.o: main.cpp # so here we will get 'main.o' from 'main.cpp'
# now we have to specify the command how we can generate the 'main.o' file from 'main.cpp'
	g++ -c main.cpp

# now we can also do another command to clean all the files that are not required like the object files
clean:
	del *.o math.exe
# here first we will delete all the object files having the extension '.o' and then we will delete the compiled 'math' file

# to run the clean command just type 'make clean' in the terminal