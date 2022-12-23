#include<stdio.h>
#include<math.h>
int main()
{
	int number,counter=1,sum=0;
	printf("enter number");
	scanf("%d" ,&number);
	while(number > counter)
	{
		if (number % counter==0)
        {
		sum += counter;
	    counter++;
		}
       else
        counter++;
    }   
      if (sum == number)
      printf("%d is pefect number" ,number);
      else
      printf("%d is not pefect number" ,number);  
     return 0;  
		
	}
	
	

