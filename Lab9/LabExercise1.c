/*
WAP to check if the given matrix is symmetric or not
for symmetric (matrix A = matrix A transpose)
*/

#include<stdio.h> 
#include<stdbool.h>

void main()
{ 
    // declaration and initialization 
    int order; 
    
    // reading the order of the matrix from the user
    printf("Please enter the order of the matrix: "); 
    scanf("%d", &order); 

    // creating a square matrix of order (order)
    int matrix[order][order];

    // reading the matrix elements from the user
    printf("Please enter the values for the matrix: \n");
    for(int i = 0; i < order; i++)
    {
        printf("Row %d\n", (i+1));
        for(int j = 0; j < order; j++)
        {
            printf("Row %d element %d: ", (i+1), (j+1)); 
            scanf("%d", &matrix[i][j]);
        }
    }

    // declaring a transpose matrix
    int transpose_matrix[order][order];

    // creating the transpose of the matrix
    for(int column = 0; column < order; column++)
    {
        for(int row = 0; row < order; row++)
        {
            transpose_matrix[row][column] = matrix[column][row]; 
        }
    }

    // comparision 
    bool is_symmetric = true; 
    for(int i = 0; i < order; i++)
    {
        for(int j = 0; j < order; j++)
        {
            if(matrix[i][j] != transpose_matrix[i][j])
            {
                is_symmetric = false;
                break;
            } 
        }
    }

    // display statement
    printf("%s", is_symmetric?"The given matrix is a symmetric matrix": "The given matrix is not a symmetric matrix");
}