#include "main.h"
/**
 * main - check the code
 * @c: The character
 * int _islower(int c);
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
