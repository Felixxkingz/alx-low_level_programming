#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet x10
 *
 * Return - always 0
 *
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int n = 10;

	while (n >= 1)
	{
		while (a <= 'z')
		{
			_putchar(a);
			++a;
		}
		--n;
		_putchar(10);
		a = 'a';
	}
}
