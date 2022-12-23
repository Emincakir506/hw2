#include<stdio.h>
#include<math.h>
int main()
{
	int lastnumber,number,counter,sum;
	printf("enter lastnumber");
	scanf("%d" ,&lastnumber);
	for(number=2;number<=lastnumber;number++)
	{   sum=0;
	      for(counter=1;counter<number;counter++)
	       {
		      if (number % counter == 0)
		       sum = sum + counter;
              else;
            }       
                 if (sum == number)
				 printf("%d\n" ,number);
                else;
	}
     return 0;  
		
	}
