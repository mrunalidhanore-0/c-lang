#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z,simpleInterest;
	
	printf("enter the value of x:");
	scanf("%d",&x);
	
	printf("enter the value of y:");
	scanf("%d",&y);
	
	printf("enter the value of z:");
	scanf("%d",&z);
	
	simpleInterest=(x*y*z)/100;
	printf("simpleInterest =%d",simpleInterest);
}
