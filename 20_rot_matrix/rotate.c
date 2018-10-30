void rotate(char mat[10][10]){
// Consider all squares one by one
  int N = 10;
for(int aux = 0; aux < 3; aux++){
  for (int x = 0; x < N / 2; x++)
    {
      // Consider elements in group of 4 in
      // current square
      for (int y = x; y < N-x-1; y++)
        {
	  // store current cell in temp variable
	  char temp = mat[x][y];
	  // move values from right to to
	  mat[x][y] = mat[y][N-1-x];
	  // move values from bottom to right
	  mat[y][N-1-x] = mat[N-1-x][N-1-y];
	  // move values from left to bottom
	  mat[N-1-x][N-1-y] = mat[N-1-y][x];
	  // assign temp to left
	  mat[N-1-y][x] = temp; 
        } 
    }
} 
}
