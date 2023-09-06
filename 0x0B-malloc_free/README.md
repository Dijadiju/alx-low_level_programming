0-create_array.c

Write a function that creates an array of chars, and initializes it with a specific char.

1-strdup.c

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

2-str_concat.c
Write a function that concatenates two strings.

Prototype: char *str_concat(char *s1, char *s2);
The returned pointer does not point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated



3-alloc_grid.c
Write a function that returns a pointer to a 2 dimensional array of integers.

Prototype: int **alloc_grid(int width, int height);
Each element of the grid should be initialized to 0
The function return NULL on failure
If width or height is 0 or negative, return NULL


4-free_grid.c
Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

Prototype: void free_grid(int **grid, int height);

100-argstostr.c
Write a function that concatenates all the arguments of your program.

101-strtow.c
Write a function that splits a string into words.


