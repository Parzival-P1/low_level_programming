#include "main.h"

/**
 * main - Write a program that prints '_putchar' followed by
 * by a new line
 *
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char putchr[] = "_putchar\n";
	int i = 0;

	while(putchr[i] != '\0')
		_putchar(putchr[i++]);

	return(0);
}

