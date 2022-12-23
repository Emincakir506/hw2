#include<stdio.h>
#include<math.h>
int main()
{
	int n=1,number=0,sum=0,digitn=1;
	printf("enter n");
	scanf("%d" ,&n);
	while(digitn <= n)
	{
	number = number * 10;
	number++;
	digitn++;
	sum += number; 
    }
    printf(" sum = %d" ,sum );
    return 0;

}
