[0:45 am, 05/06/2022] Huzaifa Ahmed: #include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**                                                                                           
 * main - prints the alphabet in lowercase,                                                   
 * followed by a new line                                                                     
 * Return: Always 0 (Success)                                                                 
 */
int main(void)
{
int n, last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, last);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0", n, last);
}
else if (n < 6; n != 0)
[0:45 am, 05/06/2022] Huzaifa Ahmed: {
printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
return (0);
}
