#include<stdio.h>
int main()
{
	
	int row,i,j,x=0;
	printf("enter row number");
	scanf("%d" ,&row);
	for(i=1 ; i <= row ;i++)
    {
    	
    for(j=1 ; j <= i ; j++)
    {
    	if(x==1)
    	x--;
    	else
    	x++;
    	printf("%d" ,x);
	}
	printf("\n");
	if (i % 2 == 0)
	x=0;
	else
	x=1;
	}
	
}
