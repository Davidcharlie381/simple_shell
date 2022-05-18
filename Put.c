#include "holberton.h"
/**
 * _puts - the function prints a string
 * @str: this function pointer to the string to print
 * Return: void
*/

void _puts(char *str)
{
int i = 0;
while (str[i])
{
	_putchar(str[i]);
	i++;
}
}
