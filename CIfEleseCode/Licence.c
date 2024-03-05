#include<stdio.h>
int main()
{
	char gender;
	int age;
	
	printf("\n Enter Your Gender (m/f):-");
	scanf("%c",&gender);
	
	printf("\n Enter Your Age:-");
	scanf("%d",&age);
	
	if(age>=18 && gender=='m')
	{
		printf("\n Male Driver Allowed for Driving");
	}
	else
	{
		printf("\n Male Driver Not Allowed for Driving");
	}
	
	return 0;
}