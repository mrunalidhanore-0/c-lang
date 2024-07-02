#include<stdio.h>
#include<conio.h>

void main()
{
	int l,b,h,area;
	printf("enter the number for angle1:");
	scanf("%d",&l);
	
	printf("enter the number for angle2:");
	scanf("%d",&b);
	
	printf("enter the number for angle3:");
	scanf("%d",&h);
	area=l*b*h;
	
	printf("areaof triangle:%d",area);
}
