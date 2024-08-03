#include<stdio.h>
#include<conio.h>

 main()
{
	int i=1,n,fact=1;
	
	
	printf("entern:");
	scanf("%d",&n);
	
	while(i<=n)
	{
	printf("fact=%d * %d; \t fact=%d \n",fact,i,fact*i,fact);
	fact=fact*i;
	i++;
   }
   printf("fact is %d",fact);
	
}
