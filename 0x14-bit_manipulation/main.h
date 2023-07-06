#ifndef KEN_BITS
#define KEN_BITS

#include <stdio.h>
#include <string.h>

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);

#endif

