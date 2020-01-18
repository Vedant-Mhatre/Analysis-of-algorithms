#include <stdio.h>
#include <stdlib.h>


void sort(int *array,int *n,int *c)
{
	int *d = (int *)malloc(sizeof(int));
	int *t = (int *)malloc(sizeof(int));
	for(*c=1;*c<=(*n-1);*c=*c+1)
	{	*d = *c;
	
	while ( *d > 0 && array[*d-1] > array[*d]) {
		*t= array[*d];
		array[*d]   = array[*d-1];
		array[*d-1] = *t;

		*d = *d-1;	
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
  int array[*n];

 	for(*c=0;*c<*n;*c=*c+1)
  	scanf("%d",&array[*c]);

	sort(array,n,c);
	
	printf("After sorting:\n");
  for(*c=0;*c<*n;*c=*c+1)
  	printf("%d\n",array[*c]);
  	
}
