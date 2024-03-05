#include<stdio.h>
int main()
{
	int a[8],i,search,check=0;
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
	printf("\nPlease Enter the Search Element:-");
	scanf("%d",&search);
	for(i=0;i<=7;i++)
	{
		if(a[i]==search)
		{
			check=1;
			break;
		}
	}
	if(check==1)
	{
		printf("\nWe have found the Search Element Number %d at position %d",search,i+1);
	}
	else
	{
		printf("\nSorry! We have not found the Search Number",search);
	}
	return 0;
}