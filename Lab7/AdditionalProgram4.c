/*
WAP using do while loop to read the numbers until -1 is encountered. 
Also count the number of prime numbers and composite numbers entered by the user. 
consider numbrer 1 to be neither prime nor composite
*/

#include<stdio.h>
#include<stdbool.h>

void main()
{
    // declaration and initialization 
    bool terminate = true; 
    unsigned int prime_counter = 0; 
    unsigned int composite_counter = 0; 

    do
    {
        int value;
        printf("Please enter a number [-1 to terminate]: "); 
        scanf("%d", &value);

        if(value == -1)
        {
           terminate = false;
           continue;
        }
        else if (value == 1)
        {
            printf("1 is neither prime nor composite\n"); 
            continue;
        }

        bool prime_found = true;
        for( unsigned long int counter = 2; counter <= value/2 ; counter++)
        {
            if(value%counter == 0) 
            {
                prime_found = false; 
                break;
            }
        }

        if(prime_found)
        {
            printf("%d is a prime number\n", value); 
            prime_counter++;
        }
        else
        {
            printf("%d is a composite number\n", value);
            composite_counter++; 
        }

        printf("Prime numbers entered = %d\nComposite numbers entered = %d\n\n", prime_counter, composite_counter);
    } while (terminate);
    
}