//program Prepred for Ice Cream Shop
#include<stdio.h>
int main()
{
	int order,total=0,qty,sum=0;
	float disc=0.0, netbill=0.0;
	
	printf("\n*****MENU LIST*****");
	printf("\n1. Ice Cream -25Rs");
	printf("\n2. Cone      -35Rs");
	printf("\n3. Pestries  -45Rs");
	printf("\n4. Pizza     -100Rs");
	printf("\n5.Exit");
	
    printf("\n Enter the Order Number:-");
    scanf("%d",&order);
    
   if(order>=1 && order<=4)
   {
   	 printf("\n Enter the Quantity:-");
   	 scanf("%d",&qty);
   	 
		    if(order==1)
		    {
		    	printf("\n Your Order is Ice-Cream with price 25Rs");
		    	total=25*qty;
			}
			else if(order==2)
			{
				printf("\n Your Order is Cone with price 35Rs");
				total=35*qty;
			}
			else if(order==3)
			{
				printf("\n Your Order is Pestries with price 45Rs");
				total=45*qty;
			}
			else if(order==4)
			{
				printf("\n Your Order is Pizza with price 100Rs");
				total=100*qty;
			}
			else if (order==5)
			{
				printf("\n Thank You! Bye Bye! Visit Again!");
			}
			
			printf("\n Total Bill=%d",total);
			if(total>=200)
			{
				printf("\n You got 20 percent discount");
				disc=total*0.20;
				printf("\n Discount=%f",disc);
				netbill=total-disc;
				printf("\n Net Bill =%f",netbill);
				printf("\n Thank You ! Visit Again!");
			}
			else
			{
				sum=200-total;
				printf("\n Purchase more Items Rs %d to Allowed Discount",sum);
			}
   }
   else
   {
   	 printf("\n Invalid Order");
   }
  
	return 0;
}