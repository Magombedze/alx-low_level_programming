#include <stdio.h>
/**
   * main - program that prints the numbers from 00 to 99
    * Numbers must be separated by ,followed by a space
     * Numbers should be printed in ascending order with 2 digits
      * You can only use the putchar function
      * Return: 0
 */




int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i >= 49)
{
putchar(i);
}
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
