/*
Arrange the given elements in a 1D array in ascending and descending order 
using bubble sort method. 

the order of the sort should be specified by the user
*/

#include<stdio.h>

void main()
{
    // declaration and initialization 
    int n; 
    int temp;
    char enterkey_buffer;

    // reading the length of the array from the user
    printf("Please enter the number of elements you want to enter: ");
    scanf("%d", &n);

    // creating an array element of size n
    int arr[n]; 

    // reading the array elements from the user
    for(int i = 0; i<n ; i++)
    {
        printf("Please enter %d array element: ", i+1);
        scanf("%d", &arr[i]); 
    }

    // buffer scanf to accept the enter key
    scanf("%c", &enterkey_buffer);

    // accepting the choice of ascending/descending from the user
    char choice;
    printf("        CHOICE \n1. Ascending [a]\n2. Descending [d]\nplease enter your choice: "); 
    scanf("%c", &choice); 

    // arranging the array elements based on the choice of the user
    switch (choice)
    {
    case 'a':
        // arranging the list in ascending order
        for(int i = 0 ;  i < n-1 ; i++)
        {
            for(int j = 0 ; j < n-i-1 ; j++)
            {
                if(arr[j] > arr[j+1])
                {
                    temp = arr[j] ;
                    arr[j] = arr[j+1];
                    arr[j+1] = temp; 
                }
            }
        }
        break;

    case 'd': 
        for(int i = 0 ;  i < n-1 ; i++)
        {
            for(int j = 0 ; j < n-i-1 ; j++)
            {
                if(arr[j] < arr[j+1])
                {
                    temp = arr[j] ;
                    arr[j] = arr[j+1];
                    arr[j+1] = temp; 
                }
            }
        }
        break;
    }

    // display statement
    printf("\nSorted Array: \n"); 
    for(int i = 0; i < n ; i++)
    {
        printf("%d, ", arr[i]);
    }
}