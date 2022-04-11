#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* is_positive - check if number is greater than 0
* is_negative - check if number is less than 0
* is_zero - check if number is equal to 0
*
* Return: 0 after printing the function
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
scanf("%d", &n);
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
