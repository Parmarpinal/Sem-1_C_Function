#include<stdio.h>
int sum();

void main()
{
	int x;
    x=sum();
    printf("Sum=%d",x);
}

int sum()
{
	int a,b,ans;
	printf("Enter no1 & no2:");
	scanf("%d %d",&a,&b);
	ans=a+b;
	return ans;	
}