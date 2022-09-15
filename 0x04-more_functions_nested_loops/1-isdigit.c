#include "main.h"

/**
 * _isdigit checks if c is a digit
 * @c : character to check for valididity
 * Return : 1 or 0
 */

int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
