#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char nums[] = "0123456789";

	int i = 0;
	int j;

	while (nums[i] <= '9')
	{
		j = 0;
		while (nums[j] <= '9')
		{
			if (nums[i] != nums[j])
			{
				putchar('0' + nums[i]);
				putchar('0' + nums[j]);

				if (i + j != '9')
				{	
					putchar(',');
					putchar(' ');
				}
			}
			i++;
		}
		j++;
	}
	putchar('\n');
	return (0);
}
