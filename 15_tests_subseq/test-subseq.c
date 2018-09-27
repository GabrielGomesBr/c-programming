#include <stdio.h>
#include <stdlib.h>
size_t maxSeq(int * array, size_t n);
int main(){
  size_t array1s;
  int array2[0];
  int array1[5] = {1, 0, 0, 0, -1};
  int array[9] = {1, -332,0, -3123, 0, 1145, 1145, -1, -1};
  array1s = maxSeq(array1,5);
  if (array1s != 1) return EXIT_FAILURE;
  array1s = maxSeq(array2, 0);
  if (array1s != 0) return EXIT_FAILURE;
  array1s = maxSeq(array,9);
   if (array1s != 3) return EXIT_FAILURE;
  return EXIT_SUCCESS;  
}
