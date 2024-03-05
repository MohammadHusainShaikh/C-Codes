#include<stdio.h>
int main()
{
	float id,wage,work,salary=0,HA=0.0,tax=0.0,hand_salary=0.0;
	
	printf("\n Enter the Employee ID:-");
	scanf("%f",&id);
	
	printf("\n Enter Employee Per Day Wage:-");
	scanf("%f",&wage);
	
	printf("\n Enter Employee working days in month:-");
	scanf("%f",&work);
	
	salary=wage*work;
	printf("\n Salary=%f",salary);
	
	printf("\n Enter House Allowance:-");
	scanf("%f",&HA);
	HA=salary*(HA/100);
	
	printf("\n Enter the Tax");
	scanf("%f",&tax);
	tax=salary*(tax/100);
	
	hand_salary=(salary-HA)-tax;
	printf("\n You Got Salary in Hand=%f",hand_salary);
		
		
	return 0;
	
}