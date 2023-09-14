#include "main.h"
/**
 * _abs - prints the sign of a number.
 * @n: int to be computed
 * Return: abs(n)
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
