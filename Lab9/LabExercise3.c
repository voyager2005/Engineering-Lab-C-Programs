/*
WAP to perform matrix multiplication 
*/

#include<stdio.h>
#include<stdbool.h>

void main()
{
    // declaration and initialization 
    int a, b, c, d; 

    // reading the order from the user
    do
    {
        printf("Please enter the order of the first matrix: "); 
        scanf("%d", &a); 
        scanf("%d", &b); 
        printf("Please enter the order of the second matrix: "); 
        scanf("%d", &c); 
        scanf("%d", &d); 
    } while (b != c);

    // creating the matrix
    int m1[a][b]; 
    int m2[c][d]; 
    int resultant_matrix[a][d]; 
    
    // reading matrix elements from the user
    printf("Please enter the values for the first matrix: \n");
    for(int i = 0; i < a; i++)
    {
        printf("Row %d\n", (i+1));
        for(int j = 0; j < b; j++)
        {
            printf("Row %d element %d: ", (i+1), (j+1)); 
            scanf("%d", &m1[i][j]);
        }
    }
    printf("Please enter the values for the second matrix: \n");
    for(int i = 0; i < c; i++)
    {
        printf("Row %d\n", (i+1));
        for(int j = 0; j < d; j++)
        {
            printf("Row %d element %d: ", (i+1), (j+1)); 
            scanf("%d", &m2[i][j]);
        }
    }

    // performing matrix multiplication 
    for(int row_counter = 0; row_counter < a; row_counter++)
    {
        for(int column_counter = 0; column_counter < d; column_counter++)
        {
            int sum = 0;
            int row_element_counter = 0;
            for(int column_element_counter = 0; column_element_counter < a; column_element_counter++)
            {
                int mul = m1[row_counter][row_element_counter] * m2[column_element_counter][column_counter]; 
                sum = sum + mul;
                row_element_counter++;
            }
            resultant_matrix[row_counter][column_counter] = sum;
        }
    }

    // display statement
    for(int i = 0; i < a; i++)
    {
        printf("[");
        for(int j = 0; j < b; j++)
        {
            printf("%d ", m1[i][j]);
        }
        printf("]\n");
    }
    printf(" x\n");
    for(int i = 0; i < c; i++)
    {
        printf("[");
        for(int j = 0; j < d; j++)
        {
            printf("%d ", m2[i][j]);
        }
        printf("]\n");
    }
    printf(" = \n");
    for(int i = 0; i < a; i++)
    {
        printf("[");
        for(int j = 0; j < d; j++)
        {
            printf("%d ", resultant_matrix[i][j]);
        }
        printf("]\n");
    }
}