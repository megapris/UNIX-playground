#include <stdio.h>

int main(void){
	//int *iptr;
	//char *cptr;
	//float *fptr;

	int a, b;
	int *iptr;
	int *jptr;

	a=5;
	b=6;

	printf("iptr before init = %p\n",iptr);
	printf("jptr before inti = %p\n", jptr);

	iptr = &a;
	jptr = &b;
	
	
	printf("iptr = %p\n", iptr);
	printf("value pointed to by iptr=%d\n",*iptr);
	printf("jptr = %p\n", jptr);
	printf("value pointed to by jptr=%d\n",*jptr);
	
	*iptr=10;

	



		

	
	return 0;
}
