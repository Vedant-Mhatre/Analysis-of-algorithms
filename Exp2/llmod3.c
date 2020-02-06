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
	{	new_node->id = 0;
	}
	else
		new_node->id = (top->id) + 1;
	*ptr = *top;
	while(ptr->next!=NULL)
		ptr = ptr->next;
	ptr->next = new_node;
	
}

void print()
{
	ptr = top;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr = ptr->next;
	}	
}








void main()
{
	int *n = (int *)malloc(sizeof(int));
    printf("Enter number of elements\n");
	scanf("%d", n);
	printf("Enter %d values\n",*n);

  	int *c = (int *)malloc(sizeof(int));
	for(*c=0;*c<*n;*c=*c+1)
		insert();
	printf("Before Sorting:\n");
	print();
	
	
}


