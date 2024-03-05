#include<stdio.h>
int main()
{
	float price,qty,bill=0.0,discount=0.0,netbill=0.0;
	
	printf("\n Enter the Price of Ice-Creame:-");
	scanf("%f",&price);
	printf("\n Enter the Quantity:-");
	scanf("%f",&qty);
	
	bill=price*qty;
	printf("\n Bill=%f",bill);
	
	if(bill>=200)
	{
		printf("\n Allowed 15 percent Discount");
		discount=bill*0.15;
		printf("\n Discount=%f",discount);
		netbill=bill-discount;
		printf("\n Netbill=%f",netbill);
	}
	else
	{
		printf("\n No Discount Applicable");
		printf("\Net Bill=%f",netbill);
	}
	
	return 0;
}