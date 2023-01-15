#include<stdio.h>
float find_SI(int p,int r,int n);

void main()
{
    float SI;
    int p,r,n;
    printf("Enter principal,rate and duration:");
    scanf("%d %d %d",&p,&r,&n);
    SI=find_SI(p,r,n);
    printf("Simple Interest=%f",SI);
}

float find_SI(int p,int r,int n)
{
	float ans;
	ans=(p*r*n)/100;
	return ans;
}