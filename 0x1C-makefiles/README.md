0x1C-makefiles projects
Tasks shall be documented here if no comments in files

Task 0:
This Makefile defines a rule all that depends on the school target. The school target specifies that the main.c and school.c files are prerequisites for the school executable. The command gcc main.c school.c -o school is used to compile the source files into the school executable.

To use this Makefile, save it as 0-Makefile in your 0x1C. Makefiles directory, and then run make -f 0-Makefile in your terminal. This will execute the all rule and compile your C files into the school executable. You can then run the executable with ./school.

Task 1:
In this Makefile:

    CC is a variable that holds the name of the compiler to be used, which is gcc in this case.
    SRC is a variable that holds the list of source files to be compiled, which are main.c and school.c.
    The all rule depends on the school target, which in turn depends on the source files specified in the SRC variable.
    The command $(CC) $(SRC) -o school uses the variables CC and SRC to compile the source files into the school executable.

To use this Makefile, save it as 1-Makefile in your 0x1C. Makefiles directory, and then run make -f 1-Makefile in your terminal. This will execute the all rule and compile your C files into the school executable. You can then run the executable with ./school.

