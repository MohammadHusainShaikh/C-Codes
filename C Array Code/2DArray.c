#include<stdio.h>
int main()
{
	int a[2][2],r,c;
	
	printf("\nEnter the 2X2 Array:");
	for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	
	printf("\nThe Array Elements are:-\n");
	for(r=0;r<=1;r++)
	{
		for(c=0;c<=1;c++)
		{
			printf("\t%d",a[r][c]);
		}
		printf("\n");
	}
	return 0;
}