#include <stdio.h>
#include <stdlib.h>

#define FIN 78

typedef struct{
	int* data;
	int top;
	int size;

}Stack;

void push(Stack *sp, int val);
int pop(Stack *sp);
int peep(Stack *sp);
Stack* init(int size);
void checker(char *p,int size);

Stack* init(int size){
	Stack *sp= (Stack*)malloc(sizeof(Stack));
	if(sp == NULL){
		printf("no hay espacio1");
		exit(1);
	}
	sp->data = (int*)malloc(sizeof(int) * size);
	if(sp->data == NULL){
		printf("no hay espacio2");
		exit(1);
	}
	sp->top=-1;
	sp->size=size;
	return sp;
	
	
	
}
void terminar(Stack *sp){
	free(sp);
	free(data);
	
}
void push(Stack *sp, int val){
	/*
	if(sp->top == sp->size-1){
		int *tmp = (int*)malloc(sizeof(int)*sp->size *1);
		if(tmp == '\0'){
			printf("error!");
			return;
		}
	
		for(int i = 0; i <= sp->top; i++){
			tmp[i]= sp->data[i];
		}
		free(sp->data);
		sp->data = tmp;
		sp->size *=2;
	}*/

	sp->data[++sp->top]=val;


}
int pop(Stack *sp){
	if(sp->top == -1){
		return -1001;
	}

	else{
		return sp->data[sp->top--];
	}
}
int peep(Stack *sp){
	if(sp->top == -1) return -1001;
	else return sp->data[sp->top];
}

int main(void){

	char line[]="hola";

	int ret = EOF + 1;
	while(ret != EOF){
		int i = 0;
		ret= scanf("%s",line);
		printf("you entered %s\n", line);
		for(i = 0; line[i] != '\0'; i++);
		printf("the lenght of the string is %d\n",i);
		checker(line,i);


	}

}

void checker(char *p, int size){
	int max = 0;
	Stack *s1 = init(size);
	printf("size of stack is %d\n",s1->size);
	push(s1,45);
	push(s1,34);
	terminar(s1);
	

}
