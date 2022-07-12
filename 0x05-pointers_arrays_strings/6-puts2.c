#include "main.h"

/**
 * puts_half - Entry point
 * @str: char array string type
 *
 */

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)

i++;
for (i /= 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
