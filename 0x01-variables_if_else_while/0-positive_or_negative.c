#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Start
 * About 'Else if a number is positive or negative'
 * Return: always 0
*/
int main(void)
{
	int n;

	printf("Enter an integer: ");
	scanf("%d", &n);

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is 0\n");
	}
	else
	{
		printf("%d is negative\n");
	}
	return (0);
}
