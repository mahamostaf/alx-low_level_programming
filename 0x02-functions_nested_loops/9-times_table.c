#include "main.h"
/**
 * add - add two numbwers
 * @a: first parameter
 * @b: second parameter
 * Return: 0 or 1
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (i * j > 9)
{
_putchar(i * j / 10 + '0');
_putchar(i * j % 10 + '0');
}
else
{
_putchar('0' + i * j);
_putchar(' ');
}
if(j == 9)
continue;
_putchar(',');
_putchar(' ');
}
_putchar('\n');
}
}
