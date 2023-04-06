#ifndef KEN_HEADER_FILE
#define KEN_HEADER_FILE

#define ulint unsigned long int
#define ui unsigned int
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
unsigned int pr(int a, int b);
void print_binary(unsigned long int n);
int get_bit(ulint n, ui index);
int set_bit(ulint *n, ui index);

#endif
