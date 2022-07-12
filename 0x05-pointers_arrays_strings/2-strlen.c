#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to find length of
 *
 * Return: length of s
 */
int _strlen(char *s)
{
int large = 0;

while (*(s + large) != '\0')
{
large++;
}
return (large);
}
