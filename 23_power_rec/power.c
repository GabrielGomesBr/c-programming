unsigned power(unsigned x, unsigned y){
  unsigned aux = x;
  if(y == 0){
    if(x == 0){
      return 1;
    }else return 1;
  }
  return x*power(x,y-1);
}
