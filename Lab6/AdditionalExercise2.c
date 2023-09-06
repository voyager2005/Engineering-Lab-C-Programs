/* 
Wap to find the factorial of a given number
*/

#include<stdio.h>

void main()
{
    // declaration and initialization 
    int num; 
    long int factorial = 1;

    // reading the number from the user
    printf("Please enter a number: "); 
    scanf("%d", &num); 

    // loop to find the factorial of the number 
    for(int i = num; i > 0; i--)
    {
        factorial = factorial * i; 
    }

    // display statement 
    printf("factorial of %d is %d", num, factorial);
}