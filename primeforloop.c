 #include<stdio.h>
 int main()
 {
 	int num1,num2=0,count=0,num;
 	scanf("%d",&num);
 	for (num1=1;num1<=num;num1++)
 	{
 	  if	(num%num1==0)
 	  {
	   
 	  count++; 
 }
	 }
	 if (count<=2)
	 {
	 
	 printf("the enter %d number is prime number \n",num);
}
else 
{
	printf("the enter %d number is not a prime number\n",num);
}
 }
