#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c,d;
	
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("enter the value of c");
	scanf("%d",&c);
	printf("enter the value of d");
	scanf("%d",&d);
	
	if(a>b)
	{
		
		if(a>c)
		{
			if(a>d)
			{
				printf("a is maximum");		
			}
			else
			{
				printf("d is maximum");	
			}
		}
		else
		{
		printf("c is maximum");			
		}
		
		
	}
	else
	{
		printf("b is maximum");				
	}	
		
			
	}
		
