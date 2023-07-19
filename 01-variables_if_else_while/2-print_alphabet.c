#include <stdio.h>

/**
 * main - prints the alphabet in lowcase
 *
 * return (0) Always success
 */
int main(void)
{

	int alpha = 97;

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar(10);

	return (0);
}

