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

void sort(struct node *top, int *n)
    {
    
    	int *c = (int *)malloc(sizeof(int));
    	int *d = (int *)malloc(sizeof(int));
    	int *position = (int *)malloc(sizeof(int));
    	int *swap = (int *)malloc(sizeof(int));
    	
    	for (*c = *n-1; *c > 0; *c=*c-1)
      {
        *position = *c;
       
        for (*d = *c - 1; *d > -1; *d=*d-1)
        {
          if ( ptrData(*position) > ptrData(*d))
            *position = *d;
        }
        if (*position != *c)
        {
          *swap = ptrData(*c);
          changeData(*c,ptrData(*position));
          changeData(*position,*swap);
          
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
	sort(top,n);
	printf("After Sorting:\n");
	print();
	
}


