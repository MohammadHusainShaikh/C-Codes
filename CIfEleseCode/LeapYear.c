//program prepared for Leap Year
//depeloped by Mohammad Husain
//date 9/01/2024
#include<stdio.h>
int main()
{
	int year;
	
	printf("\n Enter the Year:-");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("\n %d is Leap Year",year);
	}
	else
	{
	  printf("\n %d is not Leap Year",year);	
	}
	
		return 0;
}