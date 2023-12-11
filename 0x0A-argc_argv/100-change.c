#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -  prints the minimum number of coins to make change
 * @argv: Array
 * @argc: Number of arguments
 * Return:0 for success and 1 for error
 */
int main(int argc, char *argv[])
{
	int amount, coinIndex, coinCount;
	int coinValues[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	coinCount = 0;

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	for (coinIndex = 0; coinIndex < 5 && amount >= 0; coinIndex++)
	{
		while (amount >= coinValues[coinIndex])
		{
			coinCount++;
			amount -= coinValues[coinIndex];
		}
	}
	printf("%d\n", coinCount);

	return (0);
}
