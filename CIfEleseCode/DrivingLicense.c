#include<stdio.h>
int main()
{
	char gender;
	int age;
	
    printf("\n Enter your Gender(m/f):-");
	scanf("%c",&gender);
	
	printf("\n Enter your Age:-");
	scanf("%d",&age);
	
	if(gender=='m')
	{
		if(age>=18)
		{
			printf("\n Male Driver Allowed for Driving");
		}
		else
		{
			printf("\n Male Driver Not Allowed for Driving");
		}
	}
	else
	{
		if(age>=22)
		{
			printf("\n Female Driver Allowed for Driving");
		}
		else
		{
			printf("\n Female Driver Not Allowed for Driving");
		}
	}
	return 0;
}