#include "main.h"

/**
* _isdigit - checkes for digit (0 to 9)
* @c: the digit to check
*
* Return: 1 if c is digit, 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
