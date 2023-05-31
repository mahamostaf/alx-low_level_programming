#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_array- print every other character
* @a: pointer a
* @n: integer n
* Return: void
*/
void print_array(int *a, int n)
{
int i;
int *tmp = a;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
tmp++;
if (i == n - 1)
continue;
printf(", ");
}
printf("\n");
}
