#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - recursion
* @s: pointer s
* Return: void
*/
void _puts_recursion(char *s)
{
if(s == '\0')
puts('\n');
return;
puts(s);
_puts_recursion(s++);
}
