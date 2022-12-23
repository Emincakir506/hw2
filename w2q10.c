#include<stdio.h>
#include<math.h>
int main()
{
	int lastnumber,digit,number=1,temp,sum,;
	printf("enter lastnumber");
	scanf("%d" ,&lastnumber);
	while (number <= lastnumber)
	{   temp = number;
	     sum = 0;
		while (number >= 10)
		{
		digit = number % 10;
		sum = sum + pow(digit,3);
		number = number / 10;
	    }
	    sum = sum + pow(number,3);
		  if (sum == temp)
		   {
		   printf("%d\n"  ,sum);
		   temp++;
		   number = temp;
		   }
		   else 
		   temp++;
		   number = temp;
	}
	return 0;
}
