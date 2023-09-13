/*
WAP to check if the given number is prime or not
*/

#include<stdio.h>
#include<stdbool.h>

void main()
{
    // declaration and initializaion 
    int num; 
    unsigned long int counter = 2;
    bool is_prime = true;

    // reading the value of num from the user
    printf("Please enter the number: "); 
    scanf("%d", &num);

    while(counter <= num/2)
    {
        if(num%counter==0)
        {
            is_prime = false; 
            break;
        }
        counter++;
    }

    if(is_prime) printf("%d is a prime number", num); 
    else printf("%d is not a prime number", num);
}