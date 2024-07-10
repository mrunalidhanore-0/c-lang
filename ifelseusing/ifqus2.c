#include<stdio.h>
#include<conio.h>

void main()
{
	int number=0;
	printf("enter the number:");
	scanf("%d",&number);
	
	
	
	if(number>0)
	{
		printf("this number is positive");
	}
	else if(number<0)
	{
		printf("this number is nagitive");
	}
	else 
	{
		printf("this number is neutral");
	}
	
	
}
