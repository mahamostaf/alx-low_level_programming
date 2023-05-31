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
char *tmp;
tmp = str;
for (i = 0; i < (int)strlen(str); i++)
{
if (i % 2 == 0)
{
printf("%c", str[i]);
}
tmp++;
}
}
