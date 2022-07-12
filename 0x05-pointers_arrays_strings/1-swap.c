#include "main.h"
/**
 *swap_int - Entry point
 *
 *@a: the value to be swapped
 *@b: the value to be swapped
 *Return: 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
