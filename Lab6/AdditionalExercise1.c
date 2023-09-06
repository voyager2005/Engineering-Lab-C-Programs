/*
Write a program to print the sum of the digits of a number
*/

#include<stdio.h>

void main()
{
    // declaration and initialization 
    int num; 
    int sum = 0;

    // reading the number from the user
    printf("Please enter the number: "); 
    scanf("%d", &num);

    // for loop to calculate the sum of the digits of the number
    for(int temp_num = num; temp_num>0; temp_num = temp_num/10)
    {
        sum = sum + (temp_num%10);
    }

    // display statement
    printf("%d", sum);
}