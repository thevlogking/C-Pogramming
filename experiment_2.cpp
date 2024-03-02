#include<stdio.h>
int main()
{
	int l,w;
	float a,p;
	printf("Enter length: ");
	scanf("%d",&l);
	printf("Enter Width: ");
	scanf("%d", &w);
	a=l*w;
	p=(l+w)*2;
	printf("Area= %f", a);
	printf("Perimeter= %f", p);
	return 0;
}
