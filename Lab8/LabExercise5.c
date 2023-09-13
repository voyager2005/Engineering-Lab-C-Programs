/*
WAP that searches the position of the number that is entered bu the user and deletes that number 
from the array. 
display the resultant array elements
*/

#include<stdio.h>
#include<stdbool.h>

void main()
{
    // declaration and initialization 
    int n; 
    int key; 
    int position, index;

    // reading the length of the array from the user
    printf("Please enter the length of the array: "); 
    scanf("%d", &n); 

    // creating the array 
    int arr[n]; 

    // reading the array elements
    for(int i = 0 ; i < n ; i++)
    {
        printf("Please enter %d array element: ", (i + 1)); 
        scanf("%d", &arr[i]); 
    }

    // reading the key from the user
    printf("Please enter the value to be removed: "); 
    scanf("%d", &key); 

    // linear search algorithm to find the key
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] == key)
        {
            position = i + 1;
            index = i;
        }
    }

    // removing the element from the array
    for(int i = index; i < n -1 ; i++)
    {
        arr[i] = arr[i+1];
    }

    // final display statement
    for(int i = 0; i < n-1; i++)
    {
        printf("%d, ", arr[i]);
    }
}