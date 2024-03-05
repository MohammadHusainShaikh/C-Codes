//Program for Students Result Develoved by - Mohammad Husain- 29/12/2023
#include<stdio.h>
int main()
{
	float eng,math,phy,chem,bio,hindi,sst,total=0.0,perc=0.0;
	
	//Take 7 subject as a input
	printf("\n Enter the English,Mathematics,Physics,Chemistry,Biology,Hindi,Social Science Marks:-");
	scanf("%f%f%f%f%f%f%f",&eng,&math,&phy,&chem,&bio,&hindi,&sst);
	
	//calculate the total
	total=eng+math+phy+chem+bio+hindi+sst;
	printf("\n Total Result=%f",total);
	
	//calculate the percentage
	perc=total/7;
	printf("\n Percentage=%f",perc);
	
	return 0;
}