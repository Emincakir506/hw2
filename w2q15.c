#include <stdio.h>
#include <math.h>
int main()
{
	int number,ld,newNumber = 0,tmp;
	printf("enter number");
	scanf("%d" ,&number);
	tmp = number;
	while (number > 0)
	{
		ld = number % 10;
		newNumber = (newNumber * 10) + ld; 
		number = number / 10;
	} 
	if (tmp == newNumber)
	printf("palindrom ");
	else
    printf("not palindrom "); 
     return 0;
}
