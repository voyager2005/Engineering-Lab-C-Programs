/*
WAP to print the floyds triangle for the given number of rows
*/

#include<stdio.h>

void main()
{
    // declaration and initialization 
    int rows; 
    unsigned long int counter = 1; 

    // reading the number of rows from the user
    printf("Please enter the number of rows you want to display: "); 
    scanf("%d", &rows);

    // displaying the triangle
    for( int i = 1; i <= rows; i++)
    {
        for(int j = 1; j<= i ; j++)
        {
            printf("%d ", counter);
            counter++;
        }
        printf("\n");
    }
}