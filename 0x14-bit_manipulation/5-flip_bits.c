#include <stdio.h>
#include "main.h"

/**
 * flip_bits -function that return
 * the number of bits you would need to fli
 * @n:....
 * @m:....
 * Return: tally
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
/* a function that takes two integer inputs, n and m,*/
/* and returns the number of bits that*/
/* need to be flipped in n to convert it to m.*/

{
	unsigned long int outcome;
	unsigned long int tally;

	outcome = n ^ m;

	for (tally = 0; outcome > 0;)

	{
		if ((outcome & 1) == 1)
			tally++;
		outcome = outcome >> 1;
	}
	return (tally);
}
