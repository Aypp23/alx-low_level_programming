#include "main.h"
/**
* _isalpha - Shows 1 if the input is a
* letter other cases, shows 0
*
* @c: The character
*
* Return: 1 for letters. 0 for the rest.
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}