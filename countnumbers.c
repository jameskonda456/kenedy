#include<stdio.h>
int main()
{
	int num2=0,num1,num3=0;
	scanf("%d",&num1);
	while(num1>0)
	{
		num2=num1%10;
		num1=num1/10;
		
		num3=num3+num2;
	}
	printf("%d",num3);
	
}

