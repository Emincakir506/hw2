#include<stdio.h>
#include<math.h>
//factorial = f
int main()
{
	int number,digit,temp,f,sum;
	printf("enter number");
	scanf("%d" ,&number);
	temp=number;
	while (number >= 10)
	{    f=1;
		digit=number % 10;
		for(digit ; digit >= 1 ; digit--)
		{ 
		   f = f * digit;	
	    }
		number = number/10;
		sum = sum + f;
	}  
	      f=1;
	for(number ; number >= 1 ; number--)
        {f = f * number;
		 sum = sum + f;	
		}	
	   if(sum == temp)
	   printf("%d is strong number" ,temp);
	   else
     printf("%d is not strong number" ,temp);
      return 0;
 }
