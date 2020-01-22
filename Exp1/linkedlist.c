#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *root;

void insert(int num)
{
	struct node *new_node = (struct node*) malloc(sizeof(struct node));
	scanf("%d",&new_node->data);
	new_node->next = root;
	root = new_node;
}

void print()
{
	struct node *ptr = root;
	while(ptr != NULL)
	{
		printf("%d\n",ptr->data);
		ptr = ptr->next;
	}
}

void main()
{
	int opt;
	while(opt!=-1)
	{
		printf("Enter 1 to insert\n");
		scanf("%d",&opt);
		if (opt==1)
		{
			printf("Enter value to be entered:\n");
			scanf()
			insert();
		}
		else
	}
	printf("Enter number of values to be inserted");
	print();
}
