/*
WAP to find the largest and smallest element in a 1-Dimentional array (with dynamic initialization)
*/

#include<stdio.h>

void main()
{
    // declaration and initialization 
    int n; 
    int smallest, largest; 

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

    // finding the smallest and largest array element
    smallest = arr[0]; 
    largest = arr[0];
    for(i = 0; i<n ; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];
        
        if(arr[i] < smallest)
            smallest = arr[i];
    }

    // display statement
    printf("The smallest array element value is: %d\n", smallest); 
    printf("The largest array element value is: %d", largest);

}