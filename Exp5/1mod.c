#include<stdio.h>

void knapsack(int n,float weight[],float profit[], float capacity)
{
	float vector[n], maxp=0;
	float temp = capacity;
	int i;
	
	for (i = 0; i < n; i++)
     vector[i] = 0.0;
     
	for(i=0;i<n;i++)
	{
		if(weight[i]>temp)
			break;
		else{
			vector[i] = 1.0;
			maxp += profit[i];
			temp -= weight[i];
		}
	}
	
	if(i<n)
		vector[i] = temp/weight[i];
	
	maxp = maxp + (vector[i] * weight[i]);
	printf("Resultant vector:\n");
	for(i=0;i<n;i++)
		printf("%f\t",vector[i]);
	printf("Max profit:%f\n",maxp);
}

void quicksort(float x[],float weight[],float profit[],int first,int last)
{
int pivot,i,j;
float t;
if(first<last)
{
pivot=first;
i=first;
j=last;
while(i<j)
{
while(x[i]<=x[pivot]&&i<last)
i++;
while(x[j]>x[pivot])
j--;
if(i<j)
{
t=x[i];
x[i]=x[j];
x[j]=t;

t=weight[i];
weight[i]=weight[j];
weight[j]=t;

t=profit[i];
profit[i]=profit[j];
profit[j]=t;
}
}
t=x[pivot];
x[pivot]=x[j];
x[j]=t;

t=weight[pivot];
weight[pivot]=weight[j];
weight[j]=t;

t=profit[pivot];
profit[pivot]=profit[j];
profit[j]=t;

quicksort(x,weight,profit,first,j-1);
quicksort(x,weight,profit,j+1,last);
}
}
void main()
{
	int n;
	printf("Enter number of objects:");
	scanf("%d",&n);
	float weight[n],profit[n],ratio[n],capacity;
	printf("Enter weights and profits:\n");
	for(int i=0;i<n;i++)
		scanf("%f %f", &weight[i],&profit[i]);
	printf("Enter capacity:");
	scanf("%f", &capacity);
	
	for(int i=0;i<n;i++)
		ratio[i] = profit[i]/weight[i];
	for(int i=0;i<n;i++)
		printf("%f\n",ratio[i]);
	quicksort(ratio,weight,profit,0,n-1);
	printf("After sorting\n");
	for(int i=0;i<n;i++)
		printf("%f\n",ratio[i]);
	knapsack(n, weight, profit, capacity);
}























