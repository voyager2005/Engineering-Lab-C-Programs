/*
WAP to swap the principal diagonal of the matrix with the secondary diagonal
*/

#include<stdio.h>

void main()
{
    // declaration and initialization
    int order;
    int i, j;

    // reading the order of the matrix from the user
    printf("Please eneter the order of the matrix: ");
    scanf("%d", &order);

    // creating the matrix of the given order
    int matrix[order][order];

    // reading the matrix elements from the user
    printf("Please enter the matrix elements: \n");
    for(i = 0; i < order; i++)
    {
        printf("Row %d: \n", (i+1));
        for(j = 0; j < order; j++)
        {
            printf("row %d element %d: ", (i+1), (j+1));
            scanf("%d", &matrix[i][j]);
        }
    }

    int high = order-1;
    int low = 0;
    int row = 0;
    while(high>=0)
    {
        int temp = matrix[row][high];
        matrix[row][high] = matrix[row][low];
        matrix[row][low] = temp;

        low++;
        high--;
        row++;
    }

    // displaying after swapping
    printf("Please enter the matrix elements: \n");
    for(i = 0; i < order; i++)
    {
        printf("[");
        for(j = 0; j < order; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("]\n");
    }
}
