#include "main.h"
#include <math.h>

/**
* _sqrt_recursion - recursion
* @n: int n
* Return: int
*/
int _sqrt_recursion(int n)
{
if (sqrt(n) * sqrt(n) != n)
return (-1);
return (sqrt(n));
}
