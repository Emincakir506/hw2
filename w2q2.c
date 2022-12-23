#include <stdio.h>
#include <math.h>
int main()
{
	double delta,a,b,c,x1,x2;
	printf("enter coefficient");
	scanf("%lf" ,&a);
	scanf("%lf" ,&b);	
	scanf("%lf" ,&c);
	delta = (b*b)-(4*a*c);
	x1 = (- b - sqrt(delta)) / (2*a);
	x2 = (- b + sqrt(delta)) / (2*a);
	if (delta < 0)
	printf("there is not real root");
	else if (delta == 0)
	printf("x1 : %lf" ,x1);
    else
	printf("x1 : %lf" ,x1); 
    printf("x2 : %lf" ,x2);
    return 0;
}
