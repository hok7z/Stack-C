# Stack 
Is an implementation of a dynamic stack in C.

![Stack](https://upload.wikimedia.org/wikipedia/commons/thumb/e/e4/Lifo_stack.svg/1280px-Lifo_stack.svg.png)

````c
#include <stdio.h>
#include "stack.h"

int main(void) {
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
````

## API

### stack_t *newStack()
Create new stack.

### void freeStack(stack_t *stack)
Free used memory `stack`.

### void push(stack_t *stack,char *buffer)
Push `buffer` in `stack`.

### char *pop(stack_t *stack)
Pop element from `stack`.
