/*
WAP to search for an element in a given matrix and count the number of its occurances
*/

#include<stdio.h>

void main()
{
    // declaration and initialization
    int counter = 0;
    int m, n;
    int i, j;
    int key;

    // reading the order of the matrix from the user
    printf("Please enter the number of rows in the matrix: ");
    scanf("%d", &m);
    printf("Please enter the number of coloumns in the matrix: ");
    scanf("%d", &n);

    // creating the matrix of that order
    int matrix[m][n];

    // reading the array elements from the user
    printf("Please enter the matrix elements: \n");
    for(i = 0; i < m; i++)
    {
        printf("Row %d: \n", (i+1));
        for(j = 0; j < n; j++)
        {
            printf("row %d element %d: ", (i+1), (j+1));
            scanf("%d", &matrix[i][j]);
        }
    }

    // reading the key from the user
    printf("Please enter the number whose occurances that you want to count: ");
    scanf("%d", &key);

    // counting the instances of key in the matrix
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(key == matrix[i][j])
            {
                counter++;
            }
        }
    }

    // display statement
    printf("%d occured %d time(s) in the matrix", key, counter);
}
