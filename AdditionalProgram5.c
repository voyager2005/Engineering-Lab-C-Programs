/*
WAP to check if the given number is a strong number of not 
strong number: sum of factorial of digits is equal to the numebr itself
*/

#include<stdio.h>
#include<stdbool.h>

void main()
{
    // declaration and intializaion 
    int num;
    int sum = 0; 
    bool special_number; 

    // reading the number from the user
    printf("Please enter the number: ");
    scanf("%d", &num); 

    // calculating the sum of the factorial of the digits
    for(int temp = num; temp > 0; temp = temp / 10)
    {
        int digit = temp%10; 
        int factorial = 1; 
        for(int i = digit; i > 0; i--)
        {
            factorial = factorial * i; 
        }
        
        sum = sum + factorial; 
    }

    if(sum == num) special_number = true; 
    else special_number = false;

    // display statement 
    printf("The sum of the factorial of the digits of %d is %d\n", num, sum); 
    printf("%s", special_number?"The number is a special number":"The number is not a special number");
}