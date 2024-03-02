 #include <stdio.h>
int main()
{
	int a, b, c;
	printf ("Enter the number A");
	scanf("%d",&a);
	printf("Enter the number B");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("The swap result of A is= %d",a);
	printf("\nThe swap result of B is= %d",b);
	return 0;
}
