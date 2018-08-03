#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
	int data;
	int key;
	struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

// display the list
void printList()
{
	struct node *ptr = head;
	printf("\n[ ");

	// start from the beginning
	while (ptr != NULL)
	{
		printf("(%d,%d) ", ptr->key, ptr->data);
		ptr = ptr->next;
	}

	printf(" ]");
}

// insert link at the first location
void insertFirst(int key, int data)
{
	// create link
	struct node *link = (struct node*) malloc(sizeof(struct node));
	link->key = key;
	link->data = data;

	// point it to old first node 
	link->next = head;

	// point first to new first node 
	head = link;
}

// delete first item 
struct node* deleteFirst()
{
	// save reference to first link
	struct node *templink = head;

	// mark next to first link as first 
	head = head->next;

	// return the deleted link 
	return templink;
}

// is list empty 
bool isEmpty()
{
	return head = NULL;
}

int length()
{
	int length = 0;
	struct node *current;

	for (current = head; current != NULL; current = current->next)
	{
		length++;
	}
	return length;
}

// find a link with given key 
struct node* find(int key)
{
	// start from the first link
	struct node* current = head;

	// if list is empty 
	if (head == NULL)
	{
		return NULL;
	}
}