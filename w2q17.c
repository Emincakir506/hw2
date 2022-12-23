#include<stdio.h>
#include<math.h>
int main()
{
	float n,sum=0,i,a;
	 printf("enter number");
	 scanf("%f" ,&n);
	 for (i = 1 ; i <= n ; i++)
	 {  a = 1 / i;
	    printf("%f \n",a);
	 	sum += a;
	 }
	 printf("sum : %f \n" ,sum);
	 return 0;
	 
}
