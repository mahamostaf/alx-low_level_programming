#include <stdio.h>
/**
 * main - print hexadecimal numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char i;
for (i = 0; i <= 9; i++)
{
putchar(i + '0');
}
for (i = 'a'; i <= 'f'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
