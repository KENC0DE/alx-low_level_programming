#ifndef KEN_HEADER
#define KEN_HEADER

#include <stdio.h>
#include <stdlib.h>

int _putchar (char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
