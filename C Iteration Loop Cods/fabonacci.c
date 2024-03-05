#include<stdio.h>
int main()
{
	int a=0,b=1,c=0,i,term;
	
	printf("\n Enter the term Number:-");
	scanf("%d",&term);
	
	printf("\n%d \n%d",a,b);
	
	for(i=1; i<=term; i++)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;
	}
	return 0;	
}