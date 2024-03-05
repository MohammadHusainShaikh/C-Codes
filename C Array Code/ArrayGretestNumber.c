int main()
{
	int a[5],i,big=0;
	printf("\nEnter the 5 Numbers:");
	
	for(i=0; i<=4; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe Entered Numbers is:");
	for(i=0; i<=4; i++)
	{
		printf("\n%d",a[i]);
	}
	
	big=a[0];
	for(i=1; i<=4; i++)
	{
		if(a[i]>big)
		{
			big=a[i];
		}
	}
	printf("\nBiggest Number=%d",big);
	
	return 0;
}