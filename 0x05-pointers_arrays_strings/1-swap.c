#include "main.h"

/**
 * swap_int - reset the value of pointer
 * @a: pointer a
 * @b: pointer b
 * Return: void
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
