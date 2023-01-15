#include<stdio.h>
void armstrong(int n);

void main()
{
    int n;
    printf("Enter no:");
    scanf("%d",&n);
    armstrong(n);
}

void armstrong(int n)
{
	int i,a,sum=0,cube,num;
	num=n;
	for(;n!=0;)
	{
		a=n%10;
		cube=a*a*a;
		sum=sum+cube;
		n=n/10;
	}

	if(sum==num)
	{
		printf("NO. is armstrong");		
	}
	else
	{
		printf("NO. is not armstrong");	
	}
}