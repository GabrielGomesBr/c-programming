#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char * PString) {
  char * pString = PString;
  char aux;
  int counter = 0;
  if(*pString != '\0'){
    while(*(pString+1) != '\0'){
      counter++;
      pString++;
    }
    for(int i = 0; i < counter; i++){
      if(((pString-i) - (PString+i)) < 1){
	break;
      }
      aux = *(pString - i);
      *(pString-i) = *(PString+i);
      *(PString+i) = aux;
     }
  }
}
int main(void) {
  char str0[] = "";
  char str1[] = "123";
  char str2[] = "abcd";
  char str3[] = "Captain's log, Stardate 42523.7";
  char str4[] = "Hello, my name is Inigo Montoya.";
  char str5[] = "You can be my wingman anyday!";
  char str6[] = "Executor Selendis! Unleash the full power of your forces! There may be no tomorrow!";
  char * array[] = {str0, str1, str2, str3, str4, str5, str6};
  for (int i = 0; i < 7; i++) {
    reverse(array[i]);
    printf("%s\n", array[i]);
  }
  return EXIT_SUCCESS;
}
