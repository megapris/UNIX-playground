#include <stdio.h>
#include <stdlib.h>

int main (void){
	/*
	int tot = 0;
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	tot = a +b + c;
	printf("the thotal is %d\n",tot);
	
	int num;
	int sum = 0;
	int ret=EOF+1;

	while(ret != EOF){
	printf("Curret total is %d\n",sum);
	ret = scanf("%d",&num);
	sum+=num;

	}
	
	int n =12;
	int *p = (int *)malloc(sizeof(int)*n);
	for(int i=0; i < 12; i++){
		scanf("%d", p+i);
	}
	printf("arr[3] = %d\n", p[3]);
	*/

	//fgets
	/*
	int maxn =10;
	char *p=(char *)malloc(sizeof(char)*maxn);
	p = fgets(p, maxn, stdin);
	if(p != NULL){
		printf("you entered %s\n",p);
	};	
	free(p);
	*/

	// getline
	
	char *s;
	size_t maxn= 10;
	int nread;
	s = (char *)malloc(sizeof(char)*maxn);
	nread=getline(&s, &maxn, stdin);
	
	printf("you entered %s\n",s);
	printf("new maxnn = %d\n",maxn);
	printf("you entered %d characters\n",nread);

	free(s);
	
	return 0;
}
