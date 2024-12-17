#ifndef SORT
#define SORT
#include "stringProcessor.h"
void swap(char** a, char** b)
{
    char* temp = *a;
    *a = *b;
    *b = temp;
}
void quick_sort(char** arr, size_t length)
{
    if (length <= 1) return;

    char* pivot = arr[length / 2];
    size_t left = 0;
    size_t right = length - 1;

    while (left <= right)
    {

        while (strcmp(arr[left], pivot) < 0)
            left++;


        while (strcmp(arr[right], pivot) > 0)
            right--;

        if (left <= right)
        {
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }


    if (right > 0)
        quick_sort(arr, right + 1);
    if (left < length)
        quick_sort(&arr[left], length - left);
}
#endif // !SORT