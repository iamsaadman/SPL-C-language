#include <stdio.h>

int main() {
   int n, row, col;

   printf("Enter the size of the pattern: ");
   scanf("%d", &n);

   for (row = 0; row < n; row++) {
      for (col = 0; col < n; col++) {
         if (row == col || row == (n - 1 - col)) {
            printf("*");
         } else {
            printf("_");
         }
      }
      printf("\n");
   }

   return 0;
}
