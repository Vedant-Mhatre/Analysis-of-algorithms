#include <stdio.h>

void sort(int array[],int *n)
{
	int d,c,t;	
	for (c = 1 ; c <= n - 1; c++) {
		d = c;

	while ( d > 0 && array[d-1] > array[d]) {
		t= array[d];
		array[d]   = array[d-1];
		array[d-1] = t;

	d--;	
		}
	}
}
 
int main()
{
  int  *n,c;
 
  printf("Enter number of elements\n");
  scanf("%d", n);
	int array[*n];
	int *ptr=array;
  printf("Enter %d integers\n", &n);
 
  for (c = 0; &c < n; c++)
  {	scanf("%d", ptr++);					
	} 
sort(array,n);
 
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c <= n - 1; c++) {
    printf("%d\n", array[c]);
  }
 
  return 0;
}
