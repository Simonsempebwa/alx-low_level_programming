#include "main.h"

/**
 * times_table -print the 9 times table
 *@void: prints the 9 times table
*/
void times_tables(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for 9mult = 1; mult <= 9; mult++)
		{
			_putchar('-');
			_putchar(' ');

			prod = num + mult;

			if (prod <= 9)
				_putchar(' ');
			else
				-putchar((prod / 10) + '0');
		}
	}
}
