#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int num;
struct node{
	int data;
	struct node *next;
};

struct node *top = NULL;
struct node *ptr = NULL;

void insert(int d)
{
	struct node *new_node = (struct node *) malloc(sizeof(struct node));
	new_node->data = d;
	new_node->next = NULL;

	if (top == NULL){
		top = new_node;
		num = 0;
		return;
	}
	else{
		struct node *last = top;
		while(last->next != NULL)
			last = last->next;
		num++;
		last->next = new_node;
		return;
	}
}

void print()
{
	ptr = top;
	int sum=0;
	while(ptr!=NULL)
	{
		sum = sum + ((ptr->data) * pow(2,num));
		num--;
		ptr = ptr->next;
	}	
	printf("Value:%d",sum);
}


void main()
{
	printf("Enter binary\n");
	char str[1000];
	gets(str);
	for (int c = 0; c < 40; c++)
	{
		if(str[c]== '0' || str[c]== '1')
		{
			int temp = ((int)(str[c]))-48;
			insert(temp);
		}
	}
	print();
}

