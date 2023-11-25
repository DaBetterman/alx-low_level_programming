#include "main.h"

/**
* print_number - Prints an integer using _putchar
* @n: The integer to be printed
*/
void print_number(int n) /* 98*/
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0) /* [ROUND1] 98 ÷ 10 = 9.8 (9 != 0[TRUE]) */
					/* [ROUND2] 9 ÷ 10 = 0.9 (0 != 0[FALSE] Base case reached*/
	{
		print_number(n / 10); /* [ROUND1] 98 ÷ 10 = 9.8(will only use 9) recursion*/
	}

	_putchar(n % 10 + '0'); /* [ROUND2] Function call in reverse*/
							/*and prints first 9 and then 8 */
}
