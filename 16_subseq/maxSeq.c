#include <stdlib.h>
size_t maxSeq(int * array, size_t n){
  int array_aux[n];
  for(int k = 0; k < n; k++){
    array_aux[k] = 1;
  }
  size_t j = 0;
  size_t out;
  if (n == 0) return 0;
  if (n == 1) return 1;
  else{
    out = array[0];
    for(size_t i = 1; i < n; i++){
      if(array[i] > array[i-1]){
	array_aux[j] += 1;
      }
      else {
	j = j+1;
      }
    }
    for(size_t i = 0; i < n; i++){
      if(out < array_aux[i]){
	out = array_aux[i];
      }
    }
    return out;
  }
}
