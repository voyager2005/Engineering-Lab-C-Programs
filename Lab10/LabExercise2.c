/*
WAP to toggle the case of every character in a string
lower to upper case character and vice versa
*/

#include<stdio.h>
#include<string.h>

void main()
{
    // declaration and initialization
    char s[200]; 

    // reading the string from the user
    printf("Please enter the string: "); 
    gets(s);

    // converting all the lowe case characters into upper case 
    for(int i = 0; i < strlen(s); i++)
    {
        int char_ascii = (int)s[i]; 
        if(char_ascii != 32)
        {
            if(char_ascii >= 65 && char_ascii <= 90)
                char_ascii += 32; 
            else
                char_ascii -= 32; 
        }
        else
        {
            s[i] = (char)char_ascii;
        }

        s[i] = (char)char_ascii;
    }

    // display statement
    printf("Converted string: \n%s", s);
}