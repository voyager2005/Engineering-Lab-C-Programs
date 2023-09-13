/*
WAP to print all the prime numbers in a given 1D array (with dynamic initializaion)
*/

#include<stdio.h>
#include<stdbool.h>

void main()
{
    // declaration and initialization 
    int n = 10;
    int i;  
    int arr[10] = {3, 6, 2, 4, 5, 10, 7, 14, 13, 26};

    // displaying all the prime numbers in the array 
    for(i = 0; i < n ; i++)
    {
        // declaration and initialization
        int num = arr[i];
        unsigned long int counter = 2;
        bool is_prime = true;

        while(counter <= num/2)
        {
            if(num%counter==0)
            {
                is_prime = false; 
                break;
            }
            counter++;
        }

        if(is_prime) printf("%d, ", num); 
    }
}