#include <stdio.h>
#include <stdlib.h>	// for malloc()

typedef struct node{
	int number;
	struct node *previous;
	struct node *next;
}
node;

// function prototypes
void insertNode(int num, node *list);

int main(void)
{
	// create a node for list head
	node *list = NULL;
	list = malloc(sizeof(node));

	if(list != NULL)
	{
	}

	// create a new node and insert in the list
	printf("List Head address: %p\n", list);
	for(int i = 0; i < 3; i++)
	{
		insertNode(i, list);
		printf("Node's value: %d, Node's address: %p, Node's previous: %p, Node's next: %p.\n", list->next->number, list->next, list->next->previous, list->next->next);
	}

	return 0;
}

void insertNode(int num, node *list)
{
	// create a new node to insert in the list
	node *newNode = NULL;
	newNode = malloc(sizeof(node));

	if(newNode != NULL)	// if memory allocation by malloc() didn't failed
	{
		newNode->number = num;
		newNode->previous = NULL;
		newNode->next = NULL;
	}

	// insert the newly created node to the begining of the list

	// insert when the list is empty to start with
	if(list->next == NULL)
	{
		list->next = newNode;
		newNode->previous = list;
		newNode->next = NULL;
	}else
	{
		// insert when there are already few nodes in the list
		newNode->next = list->next;	// point new node's next to list's head's next
		newNode->previous = list;	// point new node's previous to the list' head

		list->next->previous = newNode;		// not working - find out why?

		list->next = newNode;		// point list head to new node
	}

	// Learn how to free the memory allocated by malloc() using free()
}
