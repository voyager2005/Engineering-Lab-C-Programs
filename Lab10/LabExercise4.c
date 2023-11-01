/*
arrange n names in alphabetical order
*/

#include<stdio.h>
#include<string.h>

void main()
{
    // declaration and initialization 
    int n; 

    // reading the number of names that the use wants to enter
    printf("Number of entries to perform: "); 
    scanf("%d", &n); 

    // creating an array of size n 
    char names[n][100]; 
    char temp[100];

    // reading the names from the user
    printf("Reading the names: \n"); 
    for(int i = 0; i < n; i++)
    {
        printf("%d. ",(i+1)); 
        scanf("%s", names[i]); 
    }

    // sorting the names in alphabetical order
    for(int i = 0; i < n -1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(strcmp(names[j], names[j+1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }

    // displaying the names
    printf("The sorted order of names are: \n");
    for(int i = 0 ; i < n ; i++)
    {
      printf("%d. %s\n",(i+1),names[i]);
    }    
}