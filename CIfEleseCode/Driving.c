//program prepred for Driving 
#include<stdio.h>
int main()
{
   int age;
   
   printf("\n Enter Your Age:-");
   scanf("%d",&age);
   
   if(age>=18)
   {
   	 printf("\n You are Allowed for Driving");
   } 
   else
   {
   	 printf("\n You are Not Allowed for Driving");
   }
	return 0;
}