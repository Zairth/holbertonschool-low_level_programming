#include "main.h"

/**
*jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
*@void: no variable
*Return: return nothing
*/
void jack_bauer(void)
{
	/**
	 * 0 | 2
	 * 0 | 3	2  3  :  5  9
	 * : | :	_  _  _  _  _
	 * 0 | 5
	 * 0 | 9	a  b     c  d
	 */

	/**
	 * Si d arrive a 10 => c + 1
	 * Si c arrive a 6  => b + 1
	 * Si b arrive a 10 => a + 1
	 */

	int a, b, c, d, num;
	
	for (int i = 0; i <= 160; i++)
	{
		for (num = 0; num <= 9; num++)
		{
			if (i % 10 == 0)
				c++;
			if (c > 5)
			{
				b++;
				c = 0;
			}
			if (b > 9)
			{
				a++;
				b = 0;
			}
			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar('\n');
		}
	}
}
