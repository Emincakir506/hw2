#include<stdio.h>
#include<math.h>
int main()
{
	float n,x,sum=1,f=1,i,j;
	printf("islemdeki x'i giriniz");
	scanf("%f" ,&x);
	printf("son terimi giriniz");
	scanf("%f" ,&n);
	for(i = 1 ; i <= n ; i++)
	{
		for(j = 1 ; j <= i ; j++)
		{
			f*=j;
		}
	  sum += pow(x,i)/f;
      f=1;	
	}
	printf("sum = %.3f" ,sum);
	return 0;
}
