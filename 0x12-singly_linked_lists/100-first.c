#include <stdio.h>

void before_main(void);

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	before_main();
	/*Call the function before maiin*/
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
