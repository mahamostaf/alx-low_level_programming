#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - reverse string
* @s: pointer s
* Return: void
*/
void print_rev(char *s)
{
int i;
for (i = strlen(s) - 1; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
}
