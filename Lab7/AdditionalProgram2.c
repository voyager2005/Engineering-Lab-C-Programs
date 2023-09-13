/*
WAP to generate prime numbers between two given limits
*/

#include<stdio.h>
#include<stdbool.h>

void main()
{
    // declaration and initialization 
    long int upper_limit, lower_limit;

    // reading the number from the user
    printf("Please enter the lower limit: "); 
    scanf("%d", &lower_limit); 
    printf("Please enter the upper limit: "); 
    scanf("%d", &upper_limit); 

    // declaration and initialization of counter variable
    unsigned long int counter = lower_limit;

    // loop to check and display all the prime numbers
    printf("The prime number between %d and %d (both excluded) are: \n", lower_limit, upper_limit);
    while(counter < upper_limit)
    {
        int i = 2; 
        bool is_prime = true; 
        while(i <= counter/2)
        {
            if(counter%i==0)
            {
                is_prime = false; 
                break;
            }
            i++; 
        }

        if(is_prime) printf("%d, ", counter); 
        counter++; 
    }
}