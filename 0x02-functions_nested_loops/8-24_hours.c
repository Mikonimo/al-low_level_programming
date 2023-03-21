#include "main.h"
/**
  * jack_bauer - prints every min of the day
  *
  */
void jack_bauer(void)
{
	for (int hr1 = 0; hr1 <= 2; hr1++)
	{
		for (int hr2 = 0; hr2 <= 9; hr2++)
		{
			if (hr1 == 2 && hr2 == 4)
				break;

			for (int min1 = 0; min1 <= 5; min1++)
			{
				for (int min2 = 0; min2 <= 9; min2++)
				{
					_putchar(hr1 + '0');
					_putchar(hr2 + '0');
					_putchar(':');
					_putchar(min1 + '0');
					_putchar(min2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
