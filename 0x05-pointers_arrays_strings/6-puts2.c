#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts2 - print every other character
* @str: pointer s
* Return: void
*/
void puts2(char *str)
{
int i;
char tmp;
for (i = 0; (int)(i < strlen(str)); i++)
{
tmp = str[i];
if ((int)tmp % 2 == 0)
{
printf("%c", str[i]);
}
str++;
}
}
