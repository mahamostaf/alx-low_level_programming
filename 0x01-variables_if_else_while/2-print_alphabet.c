#include <stdio.h>
/**
 * main - print alphabetical numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
