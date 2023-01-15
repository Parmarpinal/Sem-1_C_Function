#include<stdio.h>
int find_factorial(int n);

void main()
{
     int n,fact;
     printf("Enter no:");
     scanf("%d",&n);
     fact=find_factorial(n);
     printf("Factorial=%d",fact);
}

int find_factorial(int n)
{
	if(n==1)
	{
       return 1;
	}
	else 
	{
		return n*find_factorial(n-1);
	}

}