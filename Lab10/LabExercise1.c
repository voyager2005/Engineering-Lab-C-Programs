/*
WAP to count the number of words in a sentence
*/

#include<stdio.h> 
#include<string.h>

void main()
{
    // declaration and initialization 
    char s[200]; 
    int count = 0; int i;

    // reading the string from the user
    printf("Please enter the sentence: "); 
    gets(s);

    // adding a space at the end of the string
    s[strlen(s)] = ' ';

    // counting the number of words in the sentence
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;    
    }

    // display statement
    printf("The number of words in the sentence is %d: ", count);
}