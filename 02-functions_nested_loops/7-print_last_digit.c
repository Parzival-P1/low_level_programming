#include "main.h"
/**
 * print_last_digit - prints the last digit
 * of a number
 * @n: int to recieve
 * Return: -1, 1 or 0
 */

int print_last_digit(int n)
{
	int digit = n % 10;

	if (digit <= 0)
		digit = digit * -1; /* -1 = 1 * -1. r = 1 */
	_putchar('0' + digit);
	return (digit);
}
