#include<stdio.h>
#include<math.h>
int main()
{
	int sayi = 1,counter = 4;
	while (counter > 0)
	{ sayi = 2 * sayi;
	counter--;
	}
	printf("2^4 = %d" ,sayi);
	return 0;
}
