#include<stdio.h>
#include<math.h>
int main()
{
	int number,sum,digit,temp;
	printf("enter number");
	scanf("%d" ,&number);
	temp =number;
	while (number >= 10 )
	 { 
	  	digit = number % 10;
	  	number = number/10;
	  	sum = sum + pow(digit,3);    
     }
	  sum = sum + pow(number,3);
	  if (temp == sum )
	  printf("%d is armstrong number" ,temp);
	  else 
	  printf("%d is not armstrong number" ,temp);
	  return 0;
}
