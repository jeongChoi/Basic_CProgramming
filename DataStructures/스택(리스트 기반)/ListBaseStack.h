#ifndef __LB_STACK_H__
#define __LB_STACK_H__

#define TRUE 1
#define FALSE 0


typedef int Data;

typedef struct _node {
	Data data;
	struct _node* next;
}Node;

typedef struct _listStack {
	Node* head;
}ArrayStack;

typedef ArrayStack Stack;

void stackInit(Stack* pstack);
int sIsEmpty(Stack* pstack);

void sPush(Stack* pstack, Data data);
Data sPop(Stack* pstack);
Data sPeek(Stack* pstack);

#endif
