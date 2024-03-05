#include<stdio.h>
int main()
{
	float price,quantity,total=0.0,discount=0.0,netbill=0.0;
	
	printf("\n Enter the price of icecreme:-");
	scanf("%f",&price);
	
	printf("\n Enter the Quantity:-");
	scanf("%f",&quantity);
	
	total=price*quantity;
	printf("\n Total=%f",total);
	
	discount=total*0.15;
	printf("\n Discount=%f",discount);
	
	netbill=total-discount;
	printf("\n Net bill=%f",netbill);
	
	return 0;
	
	
	
}