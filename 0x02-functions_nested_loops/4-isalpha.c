#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - check if letter or not
 * @c: parameter to _isalpha function
 * Return: 0 or 1
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
