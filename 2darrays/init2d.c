
#include <stdio.h>

void printArray(int a[][3] ){
  for (size_t i = 0; i <= 1; ++i) {
    //size_t is a special unsigned integer 
     for (size_t j = 0; j <= 2; ++j) {
        printf("%d ", a[i][j]);
     }
     printf("\n"); // start new line of output 
     }
}

int main() {
  int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
  //[2][3] means 2 rows 3 columns 
  printf("Values in array1 by row are:\n");
  printArray(array1);

  int array2[2][3] = {1, 2, 3, 4, 5};
  printf("Values in array2 by row are:\n");
  //Because there are not enough numbers to fill out all the rows there will be zeros there 
  printArray(array2);


  int array3[2][3] = {{1, 2}, {4}};
  printf("Values in array3 by row are:\n");
  printArray(array3);
  
  return 0;
}
