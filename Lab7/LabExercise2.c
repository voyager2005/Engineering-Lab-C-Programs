/*
n tables up to k terms 
*/

#include<stdio.h>

void main()
{
    // declaration and initializaion 
    int n, k; 

    // reading the value of n and k from the user
    printf("Please enter the value of n: "); 
    scanf("%d", &n); 
    printf("Please enter teh value of k: "); 
    scanf("%d", &k);

    //loops to display the tables
    for(int i = 1; i<=n ; i++)
    {
        printf("   TABLE OF %d\n", i);
        for(int j = 1; j<=k ; j++)
        {
            printf("%d times %d are: %d\n", i, j, (i*j));
        }
        printf("\n\n");
    }
}