/*
WAP to calcualte the average of numbers entered by the user
*/

#include<stdio.h>

void main()
{
    // declaration and initializaion 
    int n; 
    int sum = 0; 
    float average; 

    // reading the number of elements the user wants to enter
    printf("Please enter the no. of values whose average you want to find: "); 
    scanf("%d", &n); 

    // loop to calcualte the average
    for(int i = 1; i <= n ; i++)
    {
        int val = 0;
        printf("Please enter the %d number: ", i); 
        scanf("%d", &val);
        sum = sum + val;
    }

    // calculating the average
    average = sum / n; 

    // display statement 
    printf("average = %.2f", average);
}