#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	printf("enter the value of x:");
	scanf("%d" ,&x);
	printf("enter the value of y:");
	scanf("%d" ,&y);
	
	printf ("(x-y-z)3=%d",(x*x*x)-(y*y*y)-(z*z*z)-(3*(x+y))+(3*(y+z))+(3*(z+x)));}
