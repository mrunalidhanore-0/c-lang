#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	
	for(a=11;a<=20;a++)
	{
		for(b=a;b<=a;b++)
		{
			printf("%d",b);
		}
		printf("\n");
	}
}
