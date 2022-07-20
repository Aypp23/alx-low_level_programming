#include "MAIN_H"
/**
 * _puts_recursion: function to print a string recursively
 * @s : string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
