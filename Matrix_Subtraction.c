#include <stdio.h>

int main()
{
    int rows, columns, i, j;

    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &columns);

    int matrix1[rows][columns], matrix2[rows][columns], result[rows][columns];

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < columns; j++) 
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < columns; j++) 
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Subtract the matrices
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < columns; j++) 
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Print the result matrix
    printf("Result Matrix:\n");
    for (i = 0; i < rows; i++) 
    {
        for (j = 0; j < columns; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}


