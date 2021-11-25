#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
   
#define STACK_LENGTH 500
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

typedef struct node{
	int value;
	struct node *next;
	int size;
	
}node;

node* head =NULL;

bool push(int value){
	node *newnode = malloc(sizeof(node));
	if (newnode == NULL) return false;

	newnode->value = value;
	newnode->next =head;
	head = newnode;
	newnode->size++;
	return true;


}

int pop(){
	if(head == NULL) return STACK_EMPTY;

	int result = head->value;
	node *tmp = head;
	head= head->next;
	
	free(tmp);
	return result;

}

int main(void){
	push(56);
	push(78);
	push(9);

	printf
	int t;
         while((t = pop()) != STACK_EMPTY){
	 printf("t = %d\n",t);
	 }


}
   

