#include <stdio.h>
#include <math.h>
int main()
{
	float r, a, p;
	printf("Enter the value of radius");
	scanf("%f", &r);
	a=r*r*M_PI;
	p=2*r*M_PI;
	printf("The Value of the Area is=%f", a);
	printf("The Value of the Perimeter is=%f", p);
	return 0;
}
