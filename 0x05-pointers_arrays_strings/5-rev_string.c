#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* rev_string - reverse string
* @s: pointer s
* Return: void
*/
void rev_string(char *s)
{
int i;
char tmp, *tmp1, *tmp2;
tmp1 = s;
tmp2 = s + strlen(s) - 1;
for (i = 0; i < strlen(s) - 1 / 2; i++)
{
tmp = *tmp1;
*tmp1 = *tmp2;
*tmp2 = tmp;
tmp1++;
tmp2--;
}
}
