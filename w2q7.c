#include<stdio.h>
#include<math.h>
int main()
{
   int i, number, lastNumber, counter;
   printf("enter lastNumber");
   scanf("%d", &lastNumber);
   for(number = 1; number <= lastNumber ; number++)
   {
      counter = 0;
      for(i = 2; i < number ; i++)
	      {
             if(number % i == 0)
		        {
                  counter++;
                   break;
                }
          }
       if(counter == 0 && number != 1)
       printf("%d ",number );
   }
	  return 0;
}
