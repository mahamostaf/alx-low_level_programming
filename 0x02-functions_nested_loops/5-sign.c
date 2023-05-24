#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - check sign of number
 * @n: parameter to print_sign function
 * Return: 0 or 1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar ('-');
return (-1);
}
}