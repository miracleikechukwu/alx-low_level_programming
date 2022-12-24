#include <stdio.h>

/**
 * main - print the sum of even fibonacci sequence up to 4,000,000
 * Return: 0
 */

int main(void)
{
	int sum_of_even_fib = 0;
	int a;
	int b;
	int sum = 1;

	a = 1;
	b = 1;

	while (b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			sum_of_even_fib += sum;
	}
	printf("%d\n", sum_of_even_fib);

	return (0);
}
