/*
WAP to check if a given number is a perfect number
*/

#include<stdio.h>

void main()
{
    // declaration and initialization 
    long int n;
    long int sum = 0;

    // reading the value of n from the user
    printf("Please enter a number: ");
    scanf("%d", &n);

    // while loop to calculate the sum and find the divisors of n
    long int control = 1; 
    while(control < n)
    {
        if (n%control == 0)
        {
            sum = sum + control;
        }
        control++; 
    }

    if(sum == n) printf("%d is a perfect number", n); 
    else printf("%d is not a perfect number", n);
}