#include "main.h"
/**
  * print_chessboard - function that prints the chessboard.
  * @a: Character
  * Return: 0.
  */
void print_chessboard(char (*a)[8])
{
	int l;
	int t;

	for (l = 0; l < 8; l++)
	{
	for (t = 0; t < 8; t++)
	_putchar(a[l][t]);
	_putchar('\n');
		}
}
