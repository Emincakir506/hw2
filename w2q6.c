#include<stdio.h>
#include<math.h>
//least common multiple = lcm
int main()
{
	int lcm,number1,number2;
	printf("enter 2 number");
	scanf("%d" ,&number1);
	scanf("%d" ,&number2);
	if (number1 % number2 == 0)
	printf("lcm = %d" ,number1);
	else if ( number1 % number2 == 0 )
	printf(" lcm = %d" ,number2);
	else 
   {
		lcm = number1 * number2;
	printf("lcm = %d" ,lcm);
   }
	return 0;
	
	
}
