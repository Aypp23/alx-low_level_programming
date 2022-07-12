#include "main.h"

/**
 * puts2 - print strings in par position.
 * @str: Variable which holds the string.
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
