#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int push(struct StackHeader* ptrHead,void* key){
	struct Stack* newNode = (struct Stack*)malloc(sizeof(struct Stack));
	
	newNode->sData = key;
	newNode->ptrLink = NULL;
		
	(ptrHead->top)++;
	if(ptrHead->top == 0){
		ptrHead->ptrStackHead = newNode;
	}
	else{
		newNode->ptrLink = ptrHead->ptrStackHead;
		ptrHead->ptrStackHead = newNode;
	}
	return 0;
}
int pop(struct StackHeader* ptrHead){
	struct Stack* deleteNode = NULL;
	int returnData = 0;
	if(ptrHead->top == -1){
		return FAIL;
	}
	else{
		(ptrHead->top)--;
		deleteNode = ptrHead->ptrStackHead;
		returnData = *(int *)deleteNode->sData;
		ptrHead->ptrStackHead = deleteNode->ptrLink;
		deleteNode->ptrLink = NULL;
		free(deleteNode);
		return returnData;
	}
}
struct Stack* peek(struct StackHeader* ptrHead){
	if(ptrHead->top == -1){
		return NULL;
	}
	else{
		return ptrHead->ptrStackHead;
	}
}

