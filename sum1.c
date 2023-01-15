#include<stdio.h>
void sum();

void main()
{
    sum();
}

void sum()
{
	int a,b,ans;
	printf("Enter no1 & no2:");
	scanf("%d %d",&a,&b);
	ans=a+b;
	printf("Sum=%d",ans);
}