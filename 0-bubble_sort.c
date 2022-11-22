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
/**
 * bubble_sort - Implements a bubble sort algorithm to in an array
 * @array: Array to be sorted
 * @size: Size of the Array to be sorted
 * 
 * Return: sorted array
*/

void bubble_sort(int *array, size_t size){
    int n = size - 1;
    int i;
    int j;

    //Loop to access each array element
    for (i = 0;i < n;i++)
    {
        //Loop to compare array elements
        for (j = 0;j < n-i;j++){
            if (array[j] > array[j + 1])
                swap(array + j, array + j + 1);
                print_array(array, size);
        }
    }
}