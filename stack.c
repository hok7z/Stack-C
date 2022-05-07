#include <stdlib.h>
#include "stack.h"

typedef struct node_t {
	char *buffer;
	struct node_t *next;
}node_t;

typedef struct stack_t {
	node_t *top;
}stack_t;

static node_t *newNode(char *buffer) {
	node_t *node = malloc(sizeof(node_t));
	
	node->buffer = buffer;
	node->next = NULL;

	return node;
}

//static void freeNode(node_t *node) {
//	node->buffer = NULL;
//	node->next = NULL;
//	free(node);
//}

extern stack_t *newStack() {
	stack_t *stack = malloc(sizeof(stack_t));
	stack->top = NULL;
	
	return stack;
}

extern void freeStack(stack_t *stack) {
	for (;pop(stack) != NULL;);
}

extern void push(stack_t *stack,char *buffer) {
	node_t *node = newNode(buffer);
	node->next = stack->top;
	stack->top = node;
}

extern char *pop(stack_t *stack) {
	if (stack->top == NULL) {
		return NULL;
	} else {
		node_t *temp = stack->top;
		stack->top = stack->top->next;
		return temp->buffer;
	}
}
