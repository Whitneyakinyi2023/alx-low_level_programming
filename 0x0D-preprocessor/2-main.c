#include<stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * @_FILE_: ......
 * Return: 0 successful
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
