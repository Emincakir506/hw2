#include<stdio.h>
#include<math.h>
int main()
{
	float side1,side2,area,perimeter;
	printf("side1 and side2 should be positive \n");
	printf("enter side1 \n");
	scanf("%f" ,&side1);
	printf("enter side2 \n");
	scanf("%f" ,&side2);
	area = side1 *  side2 ;
	perimeter = 2 * (side1 + side2);
	printf("area = %f \n perimeter = %f" ,area,perimeter);
	return 0;
}
