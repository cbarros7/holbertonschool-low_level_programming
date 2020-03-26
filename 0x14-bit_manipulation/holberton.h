#ifndef _BIT_MANIPULATION
#define _BIT_MANIPULATION

#include <stdio.h>
#include <string.h>
#include <math.h>



/*Functions*/
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/*Helper functions*/

int is_numerical(unsigned int n);
int _atoi(const char *s);
unsigned int convert_num (const char *b);

#endif
