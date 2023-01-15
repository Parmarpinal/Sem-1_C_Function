#include<stdio.h>
void max();

void main()
{
    max();
}

void max()
{
	float a,b,c,ans;
	printf("Enter no1 & no2 & no3:");
	scanf("%f %f %f",&a,&b,&c);
	ans=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("Max=%f",ans);
}