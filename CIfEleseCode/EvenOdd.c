#include<stdio.h>
int main()
{
	int n;
	
	printf("\n Enter Any Number");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("\n %d is Even Number",n);
	}
	else
	{
		printf("\n %d is Odd Number",n);
	}
	return 0;
}