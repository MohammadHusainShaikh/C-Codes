
#include<stdio.h>
int main()
{
	int n;
	
	printf("\n Enter Any Number:-");
	scanf("%d",&n);
	
	if(n%5==0)
	{
		printf("\n Number is Fully Divisible by 5");
	}
	else
	{
	 	printf("\n Number is Not Divisible by 5");	
	}
	return 0;
}