#include "main.h"

/**
* main - Entry point
* Description: Prints _putchar, followed by a new line
* Return: 0
 */

int main(void)
{
char putchar[] = "_putchar";
int msg;
for (msg = 0; msg <= 8; msg++)
{
_putchar(putchar[msg]);
}
_putchar('\n');
return (0);
}
