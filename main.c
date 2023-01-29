#include <stdio.h>

#include "stack.h"

int main (void) {
	Stack *S;
	int x;

	stack_new(&S, sizeof(int));

	for(size_t i = 0; i < 100; ++i)
		stack_push(S, &i);

	while(S->len) {
		stack_pop(S, &x);
		printf("%5d%s", x, S->len % 10 ? " " : "\n");
	}

	stack_destroy(S);
	return 0;
}
