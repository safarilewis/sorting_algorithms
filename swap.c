#include <stdio.h>
#include "sort.h"

/**
 * swap - Swaps two integers in an array
 * 
 * @i: First integers
 * @j: Second integer
*/

void swap(int *i, int *j)
{   
    int temp = *i;
    *i = *j;
    *j = temp;
}