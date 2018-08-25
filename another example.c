#include<stdio.h>
int main()
{
	int num1,num;
	scanf("%d",&num);
	num1=(num/1000)+((num/100)%10)+((num/10)%10)+(num%10);
	printf("%d",num1);
}
