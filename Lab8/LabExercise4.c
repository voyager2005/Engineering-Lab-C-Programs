/*
WAP to insert an element into an array at a given position
*/

#include<stdio.h>

void main()
{
    // declaration and initialization 
    int n; 
    int arr[40];
    int key, position; 

    // reading the number of elements the user wants to enter
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // reading the array elements from the user
    for(int i = 0; i<n ; i++)
    {
        printf("Please enter %d array element: ", i+1);
        scanf("%d", &arr[i]); 
    }

    // reading the value of key and position from the user
    printf("Please enter the value that you want to insert: ");
    scanf("%d", &key); 
    printf("Please enter the position at which you want to enter this element"); 
    scanf("%d", &position);
    
    // inserting key into that position 
    for(int i = n-1; i >= position-1 ; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[position-1] = key; 

    // displaying the final array 
    for(int i = 0; i < n+1; i++)
    {
        printf("%d, ", arr[i]);
    }
}