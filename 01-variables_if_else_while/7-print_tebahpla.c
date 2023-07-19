#include <stdio.h>

/**
 * main - prints the alphabet in lowcase in reverse 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	int i = 25;

	while (alpha[i] <= 'z' && alpha[i] >= 'a')
		putchar(alpha[i--]);

	putchar('\n');
	return (0);
}

