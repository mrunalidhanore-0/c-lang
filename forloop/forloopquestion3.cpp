#include<stdio.h>
#include<conio.h>

main()
{
	int i=2,n;
	
	printf("enter n:");
	scanf("%d",&n);
	
	do
	{
		printf("%d ",i);
		i+=2;
		
	}while(i<=n);
}
