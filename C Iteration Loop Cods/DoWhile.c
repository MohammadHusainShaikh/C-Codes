#include<stdio.h>
int main()
{
	int order;
	char choice;
	do
	{
		printf("\n*****MENU LIST*****");
		printf("\n1. Ice Cream -25Rs");
		printf("\n2. Cone      -35Rs");
		printf("\n3. Pestries  -45Rs");
		printf("\n4. Pizza     -100Rs");
		printf("\n5.Exit");
		
		printf("\n Enter the Order Number:-");
        scanf("%d",&order);
        switch(order)
        {
        	case 1:
        		printf("\n Your Order is Ice Cream with Price 25/-");
        	break;
        	case 2:
        		printf("\n Your Order is Cone with Price 35/-");
        	break;
        	case 3:
        		printf("\n Your Order is Pestries with Price 45/-");
        	break;
        	case 4:
        		printf("\n Your Order is Pizza with Price 100/-");
        	break;
        	case 5:
        		printf("\n Thank You! Bye Bye! Visit Again!!");
        	break;
        	default:
        		printf("\n Invalide Order");
        	break;
		}
		printf("\n Do you want to place another order? (Y-Yes/N-No):-");
		scanf("%s",&choice);
	}while(choice=='Y');
	return 0;
}