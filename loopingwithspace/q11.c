#include<stdio.h>
#include<conio.h>

void main()
{
	int t,a,n;
	
	for(t=1; t<=5; t++)
	{
		for(n=1; n<=t; n++)
		{
			printf(" ");
		}
		for(a=t; a<=5; a++)
		{
			if(a%2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
}

