/*
WAP to reverse a number and check if it is a palindrome number or not
*/

#include<stdio.h>
#include<stdbool.h>

void main()
{
    // declaration and initializaion 
    int num, reverse; 
    bool palindrome; 

    // reading the number from the user
    printf("Please enter the number: "); 
    scanf("%d", &num);

    // loop to reverse the number 
    reverse = 0; 
    for(int temp = num; temp > 0; temp = temp / 10)
    {
        reverse = reverse*10 + (temp%10);
    }

    // checking if the number is a palindrome 
    if(reverse == num)
    {
        palindrome = true;
    }
    else
    {
        palindrome = false;
    }

    // displaying the reverse of the number 
    printf("reverse of %d is %d\n", num, reverse); 
    printf("%s", palindrome?"The number is a palindrome":"The number is not a palindrome");
}