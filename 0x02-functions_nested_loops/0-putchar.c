#include <stdio.h>
#include <unistd.h>
/**
 * main - print alphabetical numbers
 *
 * Return: Always 0 (success)
 */
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

int main(void)
{
char c[] = "_putchar\n";
char i;
for(i = 0; i < 9; i++)
{
_putchar(c[i]);
}
}
