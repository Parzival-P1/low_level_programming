#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit nums
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char nums[] = "0123456789";

	int i = 0;

	while (nums[i] >= '0' && nums[i] <= '9')
	{
		putchar(nums[i++]);
		if (i <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

