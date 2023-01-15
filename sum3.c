#include<stdio.h>
void sum(int a,int b); 

void main()
{
	int a,b;
	printf("Enter no1 & no2:");
	scanf("%d %d",&a,&b);
    sum(a,b);
}

void sum(int a,int b)
{
	int ans;
	ans=a+b;
	printf("Sum=%d",ans);
}