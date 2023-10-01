#include "main.h"
/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number to calculate the square root of.
*
* Return:  -1 if there is no natural square root.
*/
int _sqrt_recursion(int n)
{
return (find_sqrt(n, 1));
}
/**
* find_sqrt - n to find the square root using recursion.
* @n: The number to calculate the square root of.
* @guess: The current guess for the square root.
*
* Return:  -1 if there is no natural square root.
*/
int find_sqrt(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (find_sqrt(n, guess + 1));
}

