#include <stdio.h>
void peri(int, float*, float*);
int main()
{
	int r;
	float a, p;
	printf("Enter Radius of a circle: ");
	scanf("%d", &r);
	peri(r, &a, &p);
	printf("Area= %f\n", a);
	printf("\nPerimeter= %f\n", p);
	return 0;
}
void peri(int r, float*a, float*p)
{
	*a=3.14*r*r;
	*p=2*3.14*r;
}
