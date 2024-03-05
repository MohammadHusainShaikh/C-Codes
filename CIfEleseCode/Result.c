#include<stdio.h>
int main()
{
	float comp,account,c,web,total=0.0,perc=0.0;
	
	printf("\n Enter the Marks of Computer:-");
	scanf("%f",&comp);
	
	printf("\n Enter the Marks of Accounting:-");
	scanf("%f",&account);
	
	printf("\n Enter the Marks of C-Language:-");
	scanf("%f",&c);
	
	printf("\n Enter the Marks of Web Design:-");
	scanf("%f",&web);
	
	total=comp+account+c+web;
	printf("\n Total=%f",total);
	
	perc=total/4;
	printf("\n Percentage=%f",perc);
	
	if(perc>=35)
	{
		printf("\n Student is Pass");
	}
	else
	{
		printf("\n Student is fail");
	}
	return 0;
}