# Build your own C static library

## Commandes Used
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
```

* -c: Compiles source files into object files (.o) without linking them.

### Creating a Static Library
```
ar -rc libmy.a *.o
```
* ar: The archive command used to create and manipulate static libraries.
* -r: Indicates you want to insert or replace files in the archive.
* -c: Creates the archive if it doesn't exist.
* libschool.a: The name of the static library to create or update.
* *.o: Matches all object files in the current directory to be added to the library.

### Displaying the Contents of a Static Library

```
ar -t libmy.a
```
* ar: The archive command.
* -t: Lists the contents of the static library without extracting them.
* libmy.a: The name of the static library to inspect.

### Indexing a Static Library

```
ranlib libmy.a
```

* ranlib: Generates or updates the index for a static library.
* libmy.a: The name of the static library to index.

### Compile the Test Program

```
gcc -o test_program test_program.c -L. -lmy -I<path_to_header_files>

```
* -o test_program: Specifies the output executable name as test_program.
* test_program.c: The source code of your test program.
* -L.: Informs the linker to look for libraries in the current directory.
* -lmy: Specifies to link with the libschool.a library.
* -I<path_to_header_files>: Include the directory containing header files (replace 

### Other
```
ar -t libmy.a
```
 list the contents of a static library (archive file)
* `ar`: This is the command itself, which stands for "archive."
* `-t`: stands for "table of contents." When you use -t, it tells ar to display the list of files contained in the archive.
* `libmy.a`: : This is the name of the static library (archive file) for which you want to list the contents.

