#include<stdio.h>
#include<conio.h>

void main()
{
	int score;
	char grade;
	
	printf("enter your score :");
	scanf("%d" ,&score);
	
	(score>=80)? 'A':
	(score>=60)? 'B':
	(score>=40)? 'C':
	(score>=20)? 'D':
		(score>=0)? 'D':'F';
		
		printf("your grade is %c\n",grade);

		
	switch(grade)
	{
		case'A':printf("exellent work!\n");
		break;
		case'B':printf("well done!\n");
		break;
		case'C':printf("good job!\n");
		break;
		case'D':printf("you passed,but you could do batter.\n");
		break;
		case'F':printf("sorry,you are failed.\n");
		break;
		default:printf("enter valid number");
		break;
		
		
	}
		if(score>=20)
		{
			printf("congratulation!,you are eligible for the next level");	
		}
		else
		{
			printf("please try again next time");	
		}
				
}5

	
