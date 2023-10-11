/*
WAP to find the 
i) trace
ii) norm
of a given square matrix

trace = sum of the principal diagonal elements
norm = sqrt ( sum of the squares of the individual elements of an array)
*/

#include<stdio.h> 
#include<math.h>

void main()
{
    // declaration and initialization  
    int order; 
    int trace = 0; 
    float norm = 0; 

    // reading the order of the matrix from the user
    printf("Please enter the order of the matrix: "); 
    scanf("%d", &order); 

    // creating the matrix of order (order)
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

    // calculating the trace of the matrix
    for(int i = 0; i < order; i++)
    {   
        trace = trace + matrix[i][i];
    }
    
    // calculating the norm of the matrix
    for(int i = 0; i < order; i++)
    {
        for(int j = 0; j < order; j++)
        {
            norm = norm + pow(matrix[i][j], 2);
        }
    }
    norm = sqrt(norm);

    // display statement
    printf("Trace of matrix: %d\nNorm of matrix: %f", trace, norm);
}