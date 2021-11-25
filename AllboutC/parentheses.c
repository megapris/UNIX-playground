#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_LENGTH 25
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

typedef struct node{
	int values[STACK_LENGTH];
	int top;
}stack;





bool push(stack *mystack, int value){
	if((*mystack).top >= STACK_LENGTH-1)return false;

	mystack->top++;
	//printf("%d\n",mystack->top);
	mystack->values[mystack->top]= value;

	return true;

}

int pop(stack *mystack){
	if(mystack->top == EMPTY) return STACK_EMPTY;

	int result = mystack->values[mystack->top];
	mystack->top--;

	return result;
	
}

void  peek(stack *mystack){
	if(mystack->top == EMPTY) printf("empty\n");
	printf("%d\n",mystack->top);	
	//return (*mystack.top);

}

int  peek2(stack *mystack){
          if((*mystack).top >= STACK_LENGTH-1)return STACK_EMPTY;
          //mystack->top++;
          printf("push2 %d\n",mystack->top);
	  int res = mystack->top;
	  printf("push2.1 %d\n",res);
          //mystack->values[mystack->top]= value;
 
          return res;
 }


int main (void){
	
	stack s1;
	stack s2;
	stack s3;

	push(&s1,56);
	push(&s2,78);
	push(&s2,55);
	push(&s2,65);
	push(&s3,13);
	
	push(&s2,89);
	printf("peek from main %d\n",peek2(&s2));
	int t;
	while((t = pop(&s2)) != STACK_EMPTY){
		printf("t = %d\n",t);
	}

	
	return 0;
}
