#include<stdio.hi>

/**
 * main -  program that prints all possible combinations of single-digit
  * Numbers must be separated by ,followed by a space
   * Numbers should be printed in ascending order
    * You can only use the putchar function
 * Return: 0
*/

int main(void)
{
int i;

for (i = 48; i <= 57; i++)
{
putchar(' ');
putchar(',');
putchar(i);

}
putchar('\n');
return (0);
}
