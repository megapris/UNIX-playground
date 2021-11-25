#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_LENGTH 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

typedef struct node{
	int value;
	struct node *next;
	int size;
}node;

typedef node *stack;



bool push(stack *mystack, int value){
	node *newnode = malloc(sizeof(node));
	if (newnode == NULL) return false;
	
	mystack.size++;
	newnode->value= value;
	newnode->next = *mystack;
	*mystack = newnode;

	return true;

}

int pop(stack *mystack){
	if(*mystack == NULL) return STACK_EMPTY;

	int result = (*mystack) ->value;
	node *tmp = *mystack;
	*mystack = (*mystack)->next;
	free(tmp);

	return result;
	
}

int main (void){
	
	stack s1=NULL, s2=NULL, s3=NULL;
	push(&s1,56);
	push(&s2,78);
	push(&s2,55);
	push(&s2,65);
	push(&s3,13);

	printf("size %d\n",s2.size);
	int t;
	while((t = pop(&s2)) != STACK_EMPTY){
		printf("t = %d\n",t);
	}

	return 0;
}
