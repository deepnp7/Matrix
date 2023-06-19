#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter number of rows and columns for matrices: ");
    scanf("%d %d", &rows, &cols);
    
    int a[rows][cols], b[rows][cols], result[rows][cols];

    // read input matrices a and b from user
    printf("Enter elements of matrix a:\n");
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
           scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of matrix b:\n");
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &b[i][j]);
        }
    }

    // multiply matrices a and b to get result
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    // print the matrices and result
    printf("Matrix a:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix b:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("Result:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

