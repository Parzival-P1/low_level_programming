#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int cent = 48; /* 9 in ASCII */
	int dec;
	int unit;

	while (dec <= 57)
	{
		unit = dec + 1;
		while (unit <= 57)
		{
			if (dec != unit)
			{
				putchar(dec);
				putchar(unit);

				if (dec != 56 || unit != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			unit++;
		}
		dec++;
	}

	putchar('\n');
	return (0);
}

