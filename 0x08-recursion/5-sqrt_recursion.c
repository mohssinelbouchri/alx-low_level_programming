#include "main.h"
/**
 * _sqrt_recursion - find natural square root
 * @n: int.
 * @val: square root.
 *
 * Return: int
 */
int square(int n, int val);
{
	if ((val * val) == n)
	{
		return (val);
	}
	else
	{
		if ((val * val) > n)
			return (-1);
		else
			return (_sqrt_recursion(n, val + 1));
	}
}

/**
 * _sqrt_recursion - returne the natural square root of number.
 * @n: int to find sqrt of.
 *
 * Return: squareroot of n.
 * -1 if n does not have a natural sqrt.
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion(n, 0));
}
