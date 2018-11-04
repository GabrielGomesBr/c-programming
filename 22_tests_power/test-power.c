#include <stdlib.h>
#include <stdio.h>


unsigned power(unsigned x, unsigned y);
int main(){
  unsigned num1, num2, retn;
  num1 = power(2,5);
  if(32 != num1)return EXIT_FAILURE;
  num1 = power(-2,2);
  if( 4 != num1) return EXIT_FAILURE;
  num1 = power(0,0);
  if(1 != num1) return EXIT_FAILURE;
  num1 = power(-2,3);
  if(-8 != num1) return EXIT_FAILURE;
  return EXIT_SUCCESS;
  
}
