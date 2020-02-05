#!/bin/bash
#include <stdio.h> 

int main ()
{

    printf ("Size of a char: %i byte(s)\n", sizeof (char));
    printf ("Size of an int: %i byte(s)\n", sizeof (int));
    printf ("Size of a long int: %i byte(s)\n", sizeof (long int));
    printf ("Size of a a long long int: %i byte(s)\n", sizeof (long long int));
    printf ("Size of a a float: %i byte(s)\n", sizeof (float));

    return 0;
}
