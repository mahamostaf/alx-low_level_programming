#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - check sign of number
 * @n: parameter to print_last_digit function
 * Return: 0 or 1
 */
int print_last_digit(int n)
{
_putchar(abs(n % 10) + '0');
return (abs(n % 10));
}
