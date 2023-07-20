#include "main.h"

/**
 * print_alphabet - Write a program that prints the alphabet,
 * 10 times in lowcase followed by a new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (i++ < 9)
	{
		while(alpha[i] != '\0' )
			_putchar (alpha[i++]);
	_putchar (alpha[i++]);
	}
}

