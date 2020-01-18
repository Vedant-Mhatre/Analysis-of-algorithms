#include <stdio.h>
#include<stdlib.h>
 
struct node{
	int data;
	struct *next;
}

struct *root = NULL;

void insert(int arr[], int n)
{
	for(int i;i<n;i++)
	{
	new_node = (struct node *) malloc(sizeof(struct node);
	new_node -> data = arr[i];
	new_node -> next = root;
	root = new_node;
	}
}
int main()
{
  int n, array[1000], c, d, t;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
	scanf("%d", &array[c]);
	


  for (c = 1 ; c <= n - 1; c++) {
    d = c;
 
    while ( d > 0 && array[d-1] > array[d]) {
      t= array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
 
      d--;
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", array[c]);
  }
 
  return 0;
}
