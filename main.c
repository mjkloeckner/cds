#include <stdio.h>

#include "queue.h"

int main (void) {
	Queue *Q;

	queue_new(&Q, sizeof(int));

	size_t i;
	int x;
	for(i = x = 0, x = i; i < 10; ++i, x = i)
		queue_enqueue(Q, &x);

	while(queue_is_empty(Q)) {
		queue_dequeue(Q, &x);
		printf("%5d\n", (int)x);
	}

	queue_destroy(Q);
	return 0;
}
