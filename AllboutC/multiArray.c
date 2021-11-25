#include <stdio.h>
#include <stdlib.h>

int main(void){
	int arr[5] = {1,2,3,4,5};
	printf("arr[1] = %d, *(arr+1)=%d\n", arr[1], *(arr+1));


	
	int mat[3][4] = {{1,3,4,8},{10,9,7,2},{5,6,11,12}};
	printf("mat[1][3]=%d\n",mat[1][3]);

}
