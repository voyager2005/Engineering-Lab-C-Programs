/*
WAP to find the largest and smallest element in a 1-Dimentional array (with static initialization)
*/

#include<stdio.h>

void main()
{
    // declaration and initialization 
    int smallest, largest; 
    int arr[10] = {50, 40, 30, 90, 80, 70, 60, 20, 10, 100}; 

    // finding the smallest and largest array element
    smallest = arr[0]; 
    largest = arr[0];
    int i; 
    for(i = 0; i<10 ; i++)
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