#include<stdio.h>
void swap();

void main()
{
    swap();
}

void swap()
{
	int a,b,s;
	printf("Enter no1 & no2:");
	scanf("%d %d",&a,&b);
	s=a;
	a=b;
	b=s;
	printf("%d %d",a,b);
}