#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(){

	struct node *list = malloc(sizeof(struct node));
	struct node *list2 = malloc(sizeof(struct node));

	list->next = list2;
	list->i = 7;
	list2->next = NULL;
	list2->i = 4;

	printf("\n Testing print_list(): \n");
	print_list(list);

	struct node *list3 = insert_front(list, 5);
	printf("\n Testing insert_front(): \n");
	print_list(list3);

	printf("\n Testing free_list(): \n");
	print_list(free_list(list3));

	return 0;
}