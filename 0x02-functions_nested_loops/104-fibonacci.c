#include <stdio.h>
/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
 */
int main(void)
{
	unsigned long int fb1 = 0, bk1 = 1, fb2 = 0, bk2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", bk1, bk2);
	for (count = 2; count < 98; count++)
	{
		if (bk1 + bk2 > 10000000000 || fb2 > 0 || fb1 > 0)
		{
			hold1 = (bk1 + bk2) / 10000000000;
			hold2 = (bk1 + bk2) % 10000000000;
			hold3 = fb1 + fb2 + hold1;
			fb1 = fb2, fb2 = hold3;
			bk1 = bk2, bk2 = hold2;
			printf("%lu%010lu", fb2, bk2);
		}
		else
		{
			hold2 = bk1 + bk2;
			bk1 = bk2, bk2 = hold2;
			printf("%lu", bk2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
