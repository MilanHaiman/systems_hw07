#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"


void print_list(struct node *first) {
	printf("Begin List\n");
	struct node *current = first;
	while(current != NULL) {
		printf("%d\n", current->i);
		current = current->next;
	}
	printf("End List\n");
}
struct node * insert_front(struct node *first, int data) {
	struct node *ref = malloc(sizeof(struct node));
	ref->i = data;
	ref->next = first;
	return ref;
}
struct node * free_list(struct node *first) {
	if (first->next == NULL) {
		free(first);
	}
	else {
		free_list(first->next);
		free(first);
	}
	return NULL;
}