/*
WAP to check if a number is armstrong number of not 
armstrong number: 1623 = 1^4 + 6^4 + 2^4 + 3^4
*/

#include<stdio.h>
#include<math.h>

void main()
{
    // declaration and initializaion 
    int num; 
    int digits = 0; 
    int armstrong_sum = 0;

    // reading the number from the user
    printf("Please enter the number: "); 
    scanf("%d", &num); 

    // calculating the number of digits in num
    int temp = num; 
    while(temp > 0)
    {
        temp = temp/10; 
        digits++; 
    }

    for(temp = num; temp > 0; temp = temp/10)
    {
        int a = temp%10; 
        armstrong_sum = armstrong_sum + pow(a, digits);
    }

    if(armstrong_sum == num)
        printf("%d is an armstong number", num); 
    else
        printf("%d is not an armstrong number", num);
}