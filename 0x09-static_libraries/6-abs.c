#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @r: the value
 * Description -  standard library provides a similar function
 *
 * Return: 0
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
