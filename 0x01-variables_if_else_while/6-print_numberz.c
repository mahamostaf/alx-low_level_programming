#include <stdio.h>
/**
 * main - print alphabetical numbers except q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
