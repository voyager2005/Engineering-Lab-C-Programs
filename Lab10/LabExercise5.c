/*
WAP to delete a word from the given sentence
*/

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void main()
{
    // declaration and initialization 
    char str[500]; 
    char key[500];
    char sentence[50][50];
    int i, j = 0, k = 0;

    // reading the string from the user
    printf("Please enter a sentence: "); 
    gets(str);

    // reading the key from the user
    printf("Please enter the word to be deleted from the string: "); 
    gets(key);

    // appending ' ' to s
    str[strlen(str)] = ' ';

    // converting the sentence into a 2 dimensional array 
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i+1] != ' ')
		{
			sentence[k][j] = '\0';
			k ++;
			j = 0;
		}
		else if(str[i] != ' ')
		{
			sentence[k][j] = str[i];
			j ++;
		}
	}
    
    // adding the null character to the last word in the sentence
	sentence[k][j] = '\0';

    // finding the word and deleting it from the sentence (converting it into /0 character)
    j = 0;
	for (i = 0; i < k + 1; i++)
	{
		if (strcmp(sentence[i], key) == 0)
		{
			sentence[i][j] = '\0';
		}
	}
 
    // display statement 
	j = 0;
	for (i = 0; i < k + 1; i++)
	{
		if (sentence[i][j] == '\0')
			continue;
		else
			printf ("%s ", sentence[i]);
	}
 
	printf ("\n");
}