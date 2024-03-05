#include<stdio.h>
int main()
{
	int a[3][3],r,c,flag=0;
	printf("\nEnter the 3x3 Matrix:");
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	printf("\nThe 3x3 Matrix are:\n");
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			printf("\t%d",a[r][c]);
		}
		printf("\n");
	}
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			if(r==c&a[r][c])
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==0)
	{
		printf("\nThe Matrix is Diagonal");
	}
	else
	{
		printf("\nThe Matrix is Not Diagonal");
	}
	return 0;
}