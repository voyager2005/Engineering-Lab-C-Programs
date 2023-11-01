/*
WAP to check if the given string is a palindrome or not (not case sensitive)
*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void main()
{
    // declaration and initialization 
    char s[200]; 
    char reverse[200];
    bool palindrome = true; 

    // reading the string from the user
    printf("Please enter a sentence: "); 
    gets(s);

    // reversing the string
    for(int i = 0; i < strlen(s); i++)
    {
        reverse[i] = s[strlen(s)-i-1];
    }

    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] != reverse[i])
        {
            palindrome = false; 
            break;
        }
    }

    // display statement 
    printf("%s", palindrome?"The string is a palindrome":"The string is not a palindrome");
}