#include<stdio.h>
int main()
{
	int a[8],x,i,count=0;
	printf("\nEnter the 8 Element:-");
	for(i=0;i<=7;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nThe Entered Array Elements Are:-");
	for(i=0;i<=7;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\nEnter the Number to Search for Occurance in Array:-");
	scanf("%d",&x);
	for(i=0;i<=7;i++)
	{
		if(x==a[i])
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("\n The Number is Not Available in Array");
	}
	else
	{
		printf("\nThe Number Occured %d times in Array",count);
	}
	
	return 0;
}