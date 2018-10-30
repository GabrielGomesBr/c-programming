void rotate(char matrix[10][10])
{
    int aux[10][10];
    for(int j = 0; j < 9; j++){
      for(int i = 0; i < 9; i++){
	aux[j][i] = matrix[i][j];
	matrix[i][j] = aux[j][i];
     }
   }
}
