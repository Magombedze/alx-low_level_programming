#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - assign a random number to the variable n each time it is executed
 * The string Last digit of n
 * Return: 0
 */

int main(void)

{

int n;
int x;

x = n % 10;


srand(time(0));
n = rand() - RAND_MAX / 2;
if (x > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, x);

}
else if (x < 6 && x != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
}
else if (x == 0)
{
printf("Last digit of %d is %d and is 0\n", n, x);
}




return (0);

}
