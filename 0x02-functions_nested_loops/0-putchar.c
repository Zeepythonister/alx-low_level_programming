#include "main.h"

/**
 * main - Entry point
 *
 * Description: Program that prints _putchar
 *
 * Return: Always 0 (success). Error message otherwise
 */
int main(void)
{
  /*declare local variable*/
	char *a = "_putchar";
	int a;

	for (i = 0; i < 8; i++)
		_putchar(*a);
	_putchar('\n');
	return (0);
}
