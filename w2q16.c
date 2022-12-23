#include<stdio.h>
#include<math.h>
int main()
{
	double x,sum=1,p=0,n,fact;
	int i,j;
	printf("enter number x");
	scanf("%lf" ,&x);
	printf("enter last number n");
	scanf("%lf" ,&n);
	for(i=1 ; i < n ; i++)
	{  fact=1;  
	   p+=2;
	for(j=1 ; j<=i ; j++)
		fact *= j;
	if (i % 2 == 1)
	sum -= pow(x,p) / fact;
	else  
	sum += pow(x,p) / fact;
    }
    printf(" sum : %.3lf" ,sum);
    return 0;
}
