//program to calculate Factorial Number
#include<stdio.h>
int main()
{
	int n,i,fact=1;
	
	printf("\n Enter Any Number:-");
	scanf("%d",&n);
	
	for(i=n; i>=1; i--)
	{
		fact=fact*i;
	}
	
	printf("\n Factorial=%d",fact);
	return 0;
}