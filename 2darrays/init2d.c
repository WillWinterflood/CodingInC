
#include <stdio.h>

void printArray(int a[][3] ){
  for (size_t i = 0; i <= 1; ++i) {
    //FUnction is hard coded 
    // Add a parameter to a[][3] to make the code more flexible thenyou can have one array which 3 rows and the others with 2 rows (search up)
    // n rows - 1 
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

  int array2[2][3]= {1, 2, 3, 4, 5};
  printf("Values in array2 by row are:\n");
  //Because there are not enough numbers to fill out all the rows there will be zeros there 
  printArray(array2);
  //What is more efficient 
  // this way is most efficient, want to access the memory sequentially, 


  int array3[2][3] = {{1, 2}, {4}};
  //nested array ,means put it in a new row 
  printf("Values in array3 by row are:\n");
  printArray(array3);

  return 0;
  }
