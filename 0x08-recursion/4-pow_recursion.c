#include "main.h"
/**
 * _pow_recursion - calculate the power of a given number
 * @x: number to raised
 * @y: power
 * Return: power result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
