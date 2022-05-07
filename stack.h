#ifndef STACK_H
#define STACK_H

typedef struct node_t node_t;
typedef struct stack_t stack_t;

extern stack_t *newStack();
extern void freeStack(stack_t *);

extern void push(stack_t *,char *);
extern char *pop(stack_t *);

#endif
