#include <stdio.h>
#include <stdlib.h>

int main (void){

	int *p;

	printf("p before assigning is %d\n",p);
	p = (int*)malloc(sizeof(int));
	printf("p after malloc %p\n", p);

	printf("value at p before setting = %d\n",*p);
	*p=10;
	printf("value of p after setting = %d\n",*p);

	// Allocating more memory
	int *j = (int*)malloc(100*sizeof(int));

	// Using calloc makes sure it is initialized to 0!
	int *p2 = (int*)calloc(10,sizeof(int));

	//Using realloc and calloc
	int *p3 = (int*)malloc(10*sizeof(int));
	printf("p3 after malloc is %p\n",p3);

	p3 = (int*) realloc(p3,1300*sizeof(int));
	printf("p3 after realloc is %p\n",p3);

	free(p3);
	free(p2);
	free(p);
	free(j);
	return 0;
}
