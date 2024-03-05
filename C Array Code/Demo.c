#include<stdio.h>
int main()
{
	int a[5],i;
	printf("\nEnter the 5 Numbers:");
	
	for(i=0; i<=4; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<=4; i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}