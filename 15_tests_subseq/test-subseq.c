#include <stdio.h>
#include <stdlib.h>
size_t maxSeq(int * array, size_t n);

int main(){
  size_t array1s;
  int array[7] = {1,-2,3,4};
  int array3[100] = {-1, -3, -2, -2, 0, 1, 5, 7, -101, -100, -99, -97,-96, -95};
  int array4[4] = {0, 0, 0, 0};
  int array5[5] = {1, -1, 2, 3, 4};
  int array6[9] = {-332 ,0, -3123, 0, 1145, 1145, -1, -1};
  array1s = maxSeq(array3,100);
  if (array1s != 7) return EXIT_FAILURE;
  array1s = maxSeq(array4,4);
  if (array1s != 1) return EXIT_FAILURE;
  array1s = maxSeq(array5,5);
  if (array1s != 4) return EXIT_FAILURE;
  array1s = maxSeq(array6,9);
   if (array1s != 3) return EXIT_FAILURE;
  return EXIT_SUCCESS;  
}
