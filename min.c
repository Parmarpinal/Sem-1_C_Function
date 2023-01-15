#include<stdio.h>
int min(int a,int b);

void main()
{
	int a,b;
	printf("Enter no1 & no2:");
	scanf("%d %d",&a,&b);
	min(a,b);
	  
}

int min(int a,int b)
{
	int min;
	min=(a<b)?a:b;
	printf("MIN=%d",min);
}