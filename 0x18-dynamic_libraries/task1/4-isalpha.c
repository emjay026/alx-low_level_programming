#include "main.h"

/**
* _isalpha - checks whether a character is alphabet or not.
*@c: int value of character to test
*
* Return: 1 if condition is true 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
