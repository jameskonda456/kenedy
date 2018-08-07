#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("enter the two values  ");
	scanf("%d%d",&num1,&num2);
	num3=num2;
	num2=num1;
	num1=num3;
	printf("%d%d",num1,num2);	
}
