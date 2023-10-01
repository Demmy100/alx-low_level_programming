#include "main.h"
/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number to calculate the square root of.
*
* Return: -1 if there is no natural square root.
*/
int _sqrt_recursion(int n)
{
return (actual_sqrt_recursion(n, 1));
}
/**
* actual_sqrt_recursion - to find the square root using recursion.
* @n: The number to calculate the square root of.
* @guess: The current guess for the square root.
*
* Return: -1 if there is no natural square root.
*/
int actual_sqrt_recursion(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (actual_sqrt_recursion(n, guess + 1));
}

