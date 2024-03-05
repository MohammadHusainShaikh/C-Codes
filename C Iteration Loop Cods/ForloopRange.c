#include<stdio.h>
int main()
{
	int i,a,b;
	printf("\nEnter the Starting Number:-");
	scanf("%d",&a);
	
	printf("\nEnter the Ending Number:-");
	scanf("%d",&b);
	if(a<b)
	{
		for(i=a; i<=b; i++)
		{
			printf("\n%d",i);
		}
	}
	else
	{
		for(i=a; i>=b; i--)
		{
			printf("\n%d",i);
		}
	}
	return 0;
}