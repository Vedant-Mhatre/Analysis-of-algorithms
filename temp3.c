#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *top = NULL;

void insert()
{
	struct node *new_node = (struct node *) malloc(sizeof(struct node));
	scanf("%d",&new_node->data);
	new_node->next = top;
	top = new_node;
}

void print()
{
	struct node *ptr = top;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr = ptr->next;
	}	
}

void sort(struct node *top, int *n, int *c)
{
	int *d = (int *)malloc(sizeof(int));
	struct node *temp = (struct node *) malloc(sizeof(struct node));
	for(*c=1;*c<=(*n-1);*c=*c+1)
	{
		*d = *c;
		
		while(*d>0 && (top->data) > (top->next)->data)
		{
			printf("top=%d topnext=%d\n",top->data,top->next->data);
			temp->data = top->data;
			temp->next = top->next->next;
			top = top->next;
			top->next = temp;
			printf("top=%d topnext=%d\n",top->data,top->next->data);
			*d = *d-1;
		}
		top = top->next;
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
	print();
	//printf("%d\n",top);
	sort(top,n,c);
	
}
