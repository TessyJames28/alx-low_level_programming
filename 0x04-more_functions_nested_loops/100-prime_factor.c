#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long num = 612852475143;
	int inc;

	while (inc++ < num / 2)
	{
		if (num % inc == 0)
		{
			num /= 2;
			continue;
		}

		for (inc = 3; inc < num / 2; inc += 2)
		{
			if (num % inc == 0)
				num /= inc;
		}
	}
	printf("%ld\n", num);
	return (0);
}
