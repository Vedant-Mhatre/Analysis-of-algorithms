#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	int id;
	struct node *next;
};

struct node *top = NULL;
struct node *ptr = NULL;

void insert()
{
	struct node *new_node = (struct node *) malloc(sizeof(struct node));
	scanf("%d",&new_node->data);
	if (top == NULL)
		new_node->id = 0;
	else
		new_node->id = (top->id) + 1;
	while(ptr->next!=NULL)
	
}
