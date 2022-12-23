#include<stdio.h>
#include<math.h>
int main()
{
	double sum,x,counter=3,lastcounter;
	printf("enter x");
	scanf("%lf" ,&x );
	printf("enter lastcounter");
	scanf("%lf" ,&lastcounter);
	sum = x - pow(x,counter);
	for(counter=5;counter <= lastcounter; counter=counter+2)
	{
	sum += pow(x,counter);
    }
   printf(" sum = %lf" ,sum);
   return 0;
}
