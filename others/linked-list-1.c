#include <stdio.h>
#include <stdlib.h>

// create a datatype to store nodes of a list
typedef struct node{
	int number;
	struct node *next;
}node;

int main(int argc, char *argv[]){
	// create a node for list's head
	node *list = NULL;
	list = malloc(sizeof(node));

	for(int i = 1; argv[i] != NULL; i++){

		// create a new node n
		node *n = NULL;
		n = malloc(sizeof(node));

		// update new node's value
		n->number = atoi(argv[i]);
		n->next = NULL;

		// update the addresses of list and n
		if(list != NULL){
			n->next = list->next;
			list->next = n;
		} else{
			list->next = n;
		}
	}

	// Test the implementation of linked list
	node *ptr = list;
	while(ptr != NULL){
		printf("Number: %d at address %p. Next stop %p.\n", ptr->number, ptr, ptr->next);
		ptr = ptr->next;
	}

	printf("Success.\n");
	return 0;
}
