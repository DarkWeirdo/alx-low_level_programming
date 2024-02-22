# 0x1C-makefiles projects
## Tasks shall be documented here if no comments in files

### Task 0:
This Makefile defines a rule all that depends on the `school` target. The `school` target specifies that the `main.c` and `school.c` files are prerequisites for the `school` executable. The command `gcc main.c school.c -o school` is used to compile the source files into the `school` executable.

To use this Makefile, save it as `0-Makefile` in your `0x1C`. Makefiles directory, and then run `make -f 0-Makefile` in your terminal. This will execute the all rule and compile your C files into the `school` executable. You can then run the executable with `./school`.

### Task 1:
In this Makefile:
    `CC` is a variable that holds the name of the compiler to be used, which is `gcc` in this case.
    `SRC` is a variable that holds the list of source files to be compiled, which are `main.c` and `school.c`.
    The `all` rule depends on the `school` target, which in turn depends on the source files specified in the `SRC` variable.
    The command `$(CC) $(SRC) -o school` uses the variables `CC` and `SRC` to compile the source files into the `school` executable.

To use this Makefile, save it as `1-Makefile` in your `0x1C. Makefiles` directory, and then run `make -f 1-Makefile` in your terminal. This will execute the `all` rule and compile your C files into the `school` executable. You can then run the executable with `./school`.

### Task 2:
In this Makefile:
    `CC` is the variable for the compiler, which is `gcc`.
    `SRC` is the variable for the source files, which are `main.c` and `school.c`.
    `OBJ` is the variable for the object files, which are derived from the source files by replacing the `.c` extension with `.o`.
    `NAME` is the variable for the name of the executable, which is `school`.
    The all rule depends on the `$(NAME)` target, which in turn depends on the object files.
    The `$(NAME)` target links the object files into the executable.
    The `%.o: %.c` rule compiles each `.c` file into a corresponding `.o` file.
    The `clean` rule is optional and can be used to remove the object files and the executable.

To use this Makefile, save it as `2-Makefile` in your `0x1C`. Makefiles directory. When you run `make -f 2-Makefile`, it will compile only the updated source files and link them into the `school` executable. If you modify a source file and run `make` again, only the modified source file will be recompiled, and the executable will be relinked with the updated object file.

The `clean` rule can be used to clean up the build artifacts by running `make clean`.

### Task 3:
In this Makefile:
    `CC` is the variable for the compiler, which is `gcc`.
    `SRC` is the variable for the source files, which are `main.c` and `school.c`.
    `OBJ` is the variable for the object files, which are derived from the source files by replacing the `.c` extension with `.o`.
    `NAME` is the variable for the name of the executable, which is `school`.
    `RM` is the variable for the program to delete files, which is `rm -f`.
    The `all` rule depends on the `$(NAME)` target, which in turn depends on the object files.
    The `$(NAME)` target links the object files into the executable.
    The `%.o: %.c` rule compiles each `.c` file into a corresponding `.o` file.
    The `clean` rule deletes all Emacs and Vim temporary files along with the executable.
    The `oclean` rule deletes the object files.
    The `fclean` rule calls both clean and oclean to delete all temporary files, the executable, and the object files.
    The `re` rule forces recompilation of all source files by first deleting the object files and then calling all.
    The `.PHONY` line is used to specify that `all, clean, oclean, fclean`, and `re` are not files but rather phony targets.

To use this Makefile, save it as `3-Makefile` in your `0x1C. Makefiles` directory. When you run `make -f 3-Makefile`, it will compile only the updated source files and link them into the `school` executable. The additional rules allow you to clean up the build artifacts and force a recompilation as needed.

The `clean, oclean, fclean`, and `re` rules are designed to never fail by using the `-f` option with `rm`, which ignores nonexistent files and arguments. This ensures that the Makefile can be run multiple times without errors.

### Task 4:
In this Makefile:
- `CC` is the variable for the compiler, which is `gcc`.
- `SRC` is the variable for the source files, which are `main.c` and `school.c`.
- `OBJ` is the variable for the object files, which are derived from the source files by replacing the `.c` extension with `.o`.
- `NAME` is the variable for the name of the executable, which is `school`.
- `RM` is the variable for the program to delete files, which is `rm -f`.
- `CFLAGS` is the variable for the compiler flags, which include `-Wall`, `-Werror`, `-Wextra`, and `-pedantic`.
- The `all` rule depends on the `$(NAME)` target, which in turn depends on the object files.
- The `$(NAME)` target links the object files into the executable with the specified compiler flags.
- The `%.o: %.c` rule compiles each `.c` file into a corresponding `.o` file with the specified compiler flags.
- The `clean` rule deletes all Emacs and Vim temporary files along with the executable.
- The `oclean` rule deletes the object files.
- The `fclean` rule calls both `clean` and `oclean` to delete all temporary files, the executable, and the object files.
- The `re` rule forces recompilation of all source files by first deleting the object files and then calling `all`.
- The `.PHONY` line is used to specify that `all`, `clean`, `oclean`, `fclean`, and `re` are not files but rather phony targets.

To use this Makefile, save it as `4-Makefile` in your `0x1C. Makefiles` directory. When you run `make all -f   4-Makefile`, it will compile only the updated source files with the specified compiler flags and link them into the `school` executable. The additional rules allow you to clean up the build artifacts and force a recompilation as needed.

The `clean`, `oclean`, `fclean`, and `re` rules are designed to never fail by using the `-f` option with `rm`, which ignores nonexistent files and arguments. This ensures that the Makefile can be run multiple times without errors.

### Task 5:
To create a Python function `island_perimeter` that calculates the perimeter of an island in a grid, you can follow these steps:

1. Define the function `island_perimeter` that takes a `grid` as an argument.
2. Iterate over each cell in the grid.
3. For each land cell (represented by `1`), check its neighbors (top, bottom, left, and right).
4. If a neighbor is a water cell (represented by `0`), increment a counter for the perimeter.
5. Return the total count of the perimeter.
