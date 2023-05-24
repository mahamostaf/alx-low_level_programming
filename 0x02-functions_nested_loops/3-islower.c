#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - check if c is lowercase or not
 * 'c' - paramter to _islower function to check if it is lowercase or not
 * Return: 0 or 1
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
else
{
return (0);
}
}
