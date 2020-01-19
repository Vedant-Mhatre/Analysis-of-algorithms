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
	new_node->next = top;
	top = new_node;
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

void ptrAtId(int pid)
{
	ptr = top;
	while(ptr->id!=pid)
		ptr = ptr->next;
}

int ptrData(int pid)
{
	ptrAtId(pid);
	pid =  ptr->data;
	return pid;
}

void changeData(int pid,int value)
{
	ptrAtId(pid);
	ptr->data = value;
}

void sort(struct node *top, int *n, int *c)
{
	int *d = (int *)malloc(sizeof(int));
	int *temp = (int *)malloc(sizeof(int));
	for(*c=*n-1;*c>0;*c=*c-1)
	{
		 *d = *c;

		while(*d<*n && (ptrData(*d)) > (ptrData(*d-1)))
		{
			temp = ptrData(*d);
			changeData(*d,ptrData(*d-1)); 
			changeData(*d-1,temp); 
			*d = *d+1;
		}
			
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
	sort(top,n,c);
	printf("After Sorting:\n");
	print();
	
}
