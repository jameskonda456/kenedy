 #include <stdio.h>
 int main()
 {
  int index,num;//=index num are varaiables 
  scanf("%d",&num);//=it will scan and store in & address
  for(index=0; index<=num;index++)//=condition for loop is given number is less than are equal to zero if condition satifices enter into the curley brasa 
  {
  	if ((0==index%2))//=condition that number is dividible by 2 and is equal to zero.it satifies print the value
  {
  	printf("%d\n",index);//=print the function value
  }
  } 
   
 }
