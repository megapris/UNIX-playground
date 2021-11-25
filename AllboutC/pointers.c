#include <stdio.h>

int main(void){
	//int *iptr;
	//char *cptr;
	//float *fptr;

	int a,b;
	int *iptr, *jptr;

	a = 5;
	b = 6;

	printf("before iptr = %p\n", iptr);
	printf("before jptr = %p\n", jptr);

	iptr = &a;
	jptr = &b;
	
	printf("iptr = %p\n", iptr);
	printf("value of iptr %d\n", *iptr);
	printf("jptr = %p\n", jptr);
	printf("value of jptr = %d\n", *jptr);

	*iptr = 10;



		

	
	return 0;
}
