#include <stdio.h>
/**
 * main - print alphabetical numbers reversed
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + '0');
if (i == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
