#include <stdio.h>
#include <stdlib.h>

int main (void){

	int *p;

	printf("p before = %p\n",p);
		
	p=(int *)malloc(4);

	printf("p after malloc= %p\n",p);
	printf("value at p before setting = %d\n", *p);
	*p=10;
	printf("value of p after seeting= %d\n",*p);

	char *pc;
	pc = (char *) malloc(sizeof(char));

	int *p2;
	p2 = (int *) calloc(100,sizeof(int));
	return 0;
}
