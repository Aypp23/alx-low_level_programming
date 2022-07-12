#include "main.h"

/**
 * puts2 - print strings in par position.
 * @str: Variable which holds the string.
 *
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
