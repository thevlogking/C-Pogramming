#include <stdio.h>
int main()
{
	int temf,temc;
	float c,f;
	printf ("Enter the value of Farenheit");
	scanf ("%d",&temf);
	c=(float)((temf-32)*5)/9;
	printf("The Value of celcius is= %f", c);
	printf("\nEnter the value of Celcius");
	scanf("%d",&temc);
	f=(float)(9*temc)/5+32;
	printf("The value of farenheit is= %f", f);
	return 0;
}
