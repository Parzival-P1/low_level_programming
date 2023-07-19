#include <stdio.h>

/**
 * main - prints all the nums in base 16 in lowcase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char hex[] = "0123456789abcdef";

	int i = 0;

	while (hex[i] >= '0' && hex[i] <= 'f')
		putchar(hex[i++]);

	putchar('\n');
	return (0);
}

