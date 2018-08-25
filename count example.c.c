#include<stdio.h>
int main()
{
	int num=1,num1;
	scanf("%d",&num1);
	while (num1>10)
	{
		num1=num1/10;
	num++;
	}
	printf("count is %d",num);
}
