#include "main.h"

/**
* _isdigit - checks if a character is a digit
* @c: the value to check
*
* Return: returns 1 for true 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
