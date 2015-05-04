#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int main(){
	struct StackHeader head;
	struct Stack* ptrLink = NULL;
	int key = 0;
	int insertKey1 = 10, insertKey2 = 5;
	
	head.top = -1;
	head.ptrStackHead = NULL;

	push(&head, &insertKey1);

	push(&head, &insertKey2);
	key = pop(&head);
	ptrLink = peek(&head);
	printf("pop : %d\n",key);
	printf("peek : %d\n",*(int *)ptrLink->sData);

	return 0;
}
