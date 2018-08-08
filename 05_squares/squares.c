#include <stdio.h>
#include <stdlib.h>
#define MAX(x,y) ((x>y)?x:y)
#define GREATER(x,y) ((x>y)?1:0))
#define LESS(x,y) ((x<y)?1:0)
#define GREATERE(x,y) ((x>=y)?1:0)
#define LESSE(x,y) ((x<y)? 1:0)
void squares(int size1, int x_offset, int y_offset, int size2) {
 //compute the max of size1 and (x_offset + size2).  Call this w
  int w,h,aux1,aux2,aux3,aux4;
  w = MAX(size1, (x_offset + size2));
  //compute the max of size1 and (y_offset + size2).  Call this h
  h = MAX(size1, (y_offset + size2));
  
  //count from 0 to h. Call the number you count with y
  for(int y = 0; y < h; y++){
    //count from 0 to w. Call the number you count with x
    for(int x = 0; x<w; x++){
      aux1 = (GREATERE(x,x_offset)&&(LESSE(x,x_offset+size2)));
      aux2 = ((y==y_offset)|(y == (y_offset+size2-1)));
      aux3 = (GREATERE(y,y_offset)&&(LESSE(y,y_offset+size2)));
      aux4 = ((x==x_offset)|(x == (x_offset+size2-1)));
      if((aux1 && aux2)|(aux3&&aux4)) printf("*");
      else if (((x<size1)&&((y==0)|(y==(size1-1)))) | ((y < size1) && ((x == 0) | (x == (size1-1))))) printf("#");
      else printf(" ");
    }
    printf("\n");
  }
   

      //check if  EITHER
      //    ((x is between x_offset  and x_offset +size2) AND 
      //     y is equal to either y_offset OR y_offset + size2 - 1 )
      //  OR
      //    ((y is between y_offset and y_offset + size2) AND
      //     x is equal to either x_offset OR x_offset + size2 -1)
      // if so, print a *

      //if not,
      // check if EITHER
      //    x is less than size1 AND (y is either 0 or size1-1)
      // OR
      //    y is less than size1 AND (x is either 0 or size1-1)
      //if so, print a #

      //else print a space
    //when you finish counting x from 0 to w, 
    //print a newline

}
