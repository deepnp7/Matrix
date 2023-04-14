#include <stdio.h>

int main() {
    int rows, columns;
    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &rows);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &columns);

    int matrix[rows][columns];
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < rows; i++) 
    {
      for (int j = 0; j < columns; j++) 
        {
          scanf("%d", &matrix[i][j]);
        }
    }

    int transpose[columns][rows];
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < columns; j++) 
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of the matrix: \n");
    for (int i = 0; i < columns; i++) 
    {
        for (int j = 0; j < rows; j++) 
        {
            printf("%d ", transpose[i][j]);
        }
       printf("\n");
    }

    return 0;
}

