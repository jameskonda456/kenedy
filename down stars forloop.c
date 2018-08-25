#include<stdio.h>
int main()
{ 
 int num1,num2,num;
 for(num1=0;num1<=5;num1++)
 {
 	for(num=0;num<=num1;num++)
 	{
 		printf("  "); 
	}
 	for(num2=5;num2>=num1;num2--)
 	{ 
		printf(" *"); 
			
 	}
 	printf("\n");
}
 }
