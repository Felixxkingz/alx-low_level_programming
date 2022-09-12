#include <stdio.h>

/**
* main - entry returns 0
*
* Return: always returns 0
*
*/
int main(void)
{
	unsigned char a = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(a);
		a++;
	}
	a = 'i';
	for (i = 0; i < 6; i++)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}
