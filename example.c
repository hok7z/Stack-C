#include <stdio.h>
#include "stack.h"

int main() {
	stack_t *stack = newStack();
	
	push(stack,"321");
	push(stack,"654");
	push(stack,"987");

	printf("Stack:");
	for (int i = 0;i < 3;i++) 
		printf(" %s ",pop(stack));
	printf("\n");
	
	freeStack(stack);

	return 0;
}
