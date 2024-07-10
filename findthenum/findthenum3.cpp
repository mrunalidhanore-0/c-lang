#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,max;
	printf("enter the value of the a:");
	scanf("%d",&a);
	printf("enter the value of the b:");
	scanf("%d",&b);
	printf("enter the value of the c:");
	scanf("%d",&c);
	
	max=(a>b)?(a>c?a:c):(b>c?b:c);
	
	printf("the maximum vlue is :%d",max);
	
	
}
