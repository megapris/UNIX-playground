#include <stdio.h>
#include <stdlib.h>

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))


int MAXSIZE = 500;       
int stack[256];     
int top = -1;            

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

int peek() {
   return stack[top];
}

int pop() {
   int data;
	
   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

int push(int data) {

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}


//---------------------------------------------------------------
void checker(char *p);
int main (void){
	
	char line[]= "{{}}()[()]";
	checker(line);
	
	return 0;
}
void checker(char *p){
	int max = 0;
	push(-1);
	
	for(int i =0; p[i] != '\0' ;i++){
		if(p[peek()] == '(' && p[i] ==')'||
		p[peek()] == '{' && p[i] =='}'||
		p[peek()] == '[' && p[i] ==']'){
			printf("peek if %d\n", peek());
			pop();
			max = MAX(i-peek(),max);

		}
		else{
			push(i);
		}	
	}
	printf("________________\n");
	for(int i = 0; i < 15; i++){
		printf("%d ",stack[i]);
	}
	printf("\n");
	printf("%d\n",max);
	
}
