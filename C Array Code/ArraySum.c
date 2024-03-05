#include<stdio.h>
int main()
{
	int a[5],i,sum=0;
	printf("\nEnter the 5 Numbers:");
	
	for(i=0; i<=4; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nThe Entered Numbers is:");
	for(i=0; i<=4; i++)
	{
		printf("\n%d",a[i]);
		sum=sum+a[i];
	}
	printf("\nSum of given 5 Numbers is %d",sum);
	return 0;
}