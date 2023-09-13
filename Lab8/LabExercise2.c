/*
WAP to print all the prime numbers in a given 1D array (with dynamic initializaion)
*/

#include<stdio.h>
#include<stdbool.h>

void main()
{
    // declaration and initialization 
    int n; 

    // reading the size of the array from the user
    printf("Please enter the size of the array: "); 
    scanf("%d", &n); 
    
    // creating the array
    int arr[n]; 

    // reading the array elements from the user
    int i; 
    for(i = 0; i < n; i++)
    {
        printf("Please enter %d element: ", i+1); 
        scanf("%d", &arr[i]); 
    }

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