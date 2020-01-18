#include<stdio.h>
#include<stdlib.h>
void main()
{
	//void *memory = malloc(sizeof(int));
    void *memory = (int *)malloc(sizeof(int));
    int *ptr = (int *)malloc(sizeof(int));
    int *pptr = memory;
    int *r = memory;
    scanf("%d",r);
    scanf("%d",pptr);
    printf("%d\n%d\n", *r,*pptr);
    //free(memory);
}
