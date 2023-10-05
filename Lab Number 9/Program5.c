/*
WAP to interchange any two rows or coloums in a given matrix
*/

#include<stdio.h>

void main()
{
    // declaration and initialization
    int m, n;
    int i, j;
    char choice;
    int a, b;

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

    // reading the choice from the user to swap row or coloumn
    printf("Please enter your choice of swap (r/c)");
    scanf("%c", &choice);
    scanf("%c", &choice);

    switch(choice)
    {
        case 'r':
            // reading the rows to be swapped by the user
            do
            {
                printf("First row number to swap: ");
                scanf("%d", &a);
                printf("Second row number to swap: ");
                scanf("%d", &b);
            }
            while(a-1 > m || b-1 > m || a == b);

            a = a - 1;
            b = b - 1;

            // swapping the two rows
            for(i = 0; i < n ; i++)
            {
                int temp = matrix[a][i];
                matrix[a][i] = matrix[b][i];
                matrix[b][i] = temp;
            }
            break;

        case 'c':
            // reading the columns to be swapped by the user
            do
            {
                printf("First column number to swap: ");
                scanf("%d", &a);
                printf("Second column number to swap: ");
                scanf("%d", &b);
            }
            while(a-1 > n || b-1 > n || a == b);

            a = a - 1;
            b = b - 1;

            // swapping the two columns
            for(i = 0; i < m ; i++)
            {
                int temp = matrix[i][a];
                matrix[i][a] = matrix[i][b];
                matrix[i][b] = temp;
            }
            break;
    }

    // displaying after swapping
    printf("Please enter the matrix elements: \n");
    for(i = 0; i < m; i++)
    {
        printf("[");
        for(j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("]\n");
    }
}
