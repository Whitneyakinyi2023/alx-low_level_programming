#include <stdio.h>
/**
 * main - start 
 * Description : numbers 1 to 100 are printed out
 * fizz mutiples of 3
 * buzz of 5
 * Return: 0
 */

int main(void)
{
	int t;
	for (t = 1; t <= 100; t++)
	{
		if (t % 15 == 0)
			printf("Fizzbuzz");
		else if (t % 3 == 0)
			printf("Fizz");
		else if (t % 5 == 0)
			printf("Buzz");
		else
			printf("%t", t);
		if (t < 100)
			printf(" ");
	}
	printf("\n");
		return (0);
}
