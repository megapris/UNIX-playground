#include <stdio.h>
#include <stdlib.h>

int main(void){

	int rows = 3;
	int cols =4;

	int *mat= calloc(rows*cols,sizeof(int));

	for(int i=0;i< rows*cols;i++){
		*(mat+i) = i;
	}
	printf("mat[1]=%d\n",mat[1]);
	// accessing [i][j] on mult array
	printf("mat[1][2]=%d\n",*(mat + 1*cols+2));

	// Requesting individual blocks of mem (not contiguous)
	// can have rows of mul lenght
	int **mat= (int**) calloc(rows,sizeof(int));
	for(int i = 0; i < rows; i++){
		*(mat+1)=(int *)calloc(cols,sizeof(int));
	}

	// Requesting individual blocks of mem making sure they're contiguous
	// can have rows of mul lenght
	int *A=(int*)calloc(rows*cols,sizeof(int));
	int **mat=(int**)calloc(rows,sizeof(int));
	for(int i=0; i< rows; i++){
		*(mat+i) = (int*)calloc(cols,sizeof(int));
	}
	
	return 0;

}
