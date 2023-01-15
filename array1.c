#include<stdio.h>
void print_array(int a[]);

void main()
{
	int a[4],i;
	printf("Enter array elements:");
	for(i=0;i<4;i++)
	{
         scanf("%d",&a[i]);
	}
	print_array(a);
}

void print_array(int a[])
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("\n%d",a[i]);
	}
}

