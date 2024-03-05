//Program to find Even & Odd Numbers between 1 to 20
#include<stdio.h>
int main()
{
	int i,sum=0,sub=0;
	printf("\nODD \t\t Even");
	
	for(i=1; i<=20; i++)
	{
		if(i%2==0)
		{
			printf("\t\t%d",i);
			sum=sum+i;
		}
		else
		{
			printf("\n%d",i);
			sub=sub+i;
		}
		
	}
	printf("\n--------------------");
	printf("\nSub=%d \tSum=%d",sub,sum);
	return 0;
}