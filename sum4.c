#include<stdio.h>
int sum(int a,int b);

void main()
{
	int a,b,x;
	printf("Enter no1 & no2:");
	scanf("%d %d",&a,&b);
    x=sum(a,b);
    printf("Sum=%d",x);
}

int sum(int a,int b)
{
	int ans;
	ans=a+b;
	return ans;	
}