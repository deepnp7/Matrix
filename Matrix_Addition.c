#include <stdio.h>

int main() {
   int m, n, i, j;
   int matrix1[10][10], matrix2[10][10], result[10][10];

   printf("Enter the number of rows and columns of the matrices: ");
   scanf("%d %d", &m, &n);

   // Input elements of the first matrix
   printf("\nEnter the elements of the first matrix:\n");
   for(i = 0; i < m; i++) 
   {
      for(j = 0; j < n; j++) 
      {
         scanf("%d", &matrix1[i][j]);
      }
   }

   // Input elements of the second matrix
   printf("\nEnter the elements of the second matrix:\n");
   for(i = 0; i < m; i++) 
   {
      for(j = 0; j < n; j++) 
      {
         scanf("%d", &matrix2[i][j]);
      }
   }

   // Addition of corresponding elements of both matrices
   for(i = 0; i < m; i++) 
   {
      for(j = 0; j < n; j++) {
         result[i][j] = matrix1[i][j] + matrix2[i][j];
      }
   }

   // Print the sum matrix
   printf("\nThe sum of the matrices is:\n");
   for(i = 0; i < m; i++) {
      for(j = 0; j < n; j++) {
         printf("%d ", result[i][j]);
      }
      printf("\n");
   }

   return 0;
}

