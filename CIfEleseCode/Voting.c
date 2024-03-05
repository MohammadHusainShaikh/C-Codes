//program prepred for simple if-else
#include<stdio.h>
int main()
{ 
   int age;
   
   printf("\n Enter your Age:-");
   scanf("%d",&age);
   
   if(age>=18)
   {
   	 printf("\n You are Allowed for Voting");
   }
   else
   {
   	 printf("\n You are Not Allowed for Voting");
   }
	return 0;
}