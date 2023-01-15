#include<stdio.h>
int max();

void main()
{
	int x;
	x=max();
	printf("Max=%d",x);  
}

int max()
{
	int a,b,ans;
	printf("Enter no1 & no2:");
	scanf("%d %d",&a,&b);
	ans=(a>b)?a:b;
	return ans;
}