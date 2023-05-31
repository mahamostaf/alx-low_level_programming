#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts_half - print every other character
* @str: pointer s
* Return: void
*/
void puts_half(char *str)
{
int i;
char *tmp = str;
tmp += (strlen(str) + 1) / 2;
for (i = (strlen(str) + 1) / 2; i < (int)strlen(str); i++)
{
printf("%c", str[i]);
}
printf("\n");
}
