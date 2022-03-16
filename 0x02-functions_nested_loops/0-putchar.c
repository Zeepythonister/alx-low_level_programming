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

	for (a = 0; a < 8; a++)
		_putchar(*a);
	_putchar('\n');
	return (0);
}
