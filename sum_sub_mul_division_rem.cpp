#include <stdio.h>
int main()
{
	int a, b, sum, rem, sub, mul;
    float division;
	printf ("Enter the 1st number");
	scanf("%d",&a);
	printf("Enter the 2nd number");
	scanf("%d",&b);
    sum=a+b;
    printf("\nThe result of the sum is=%d",sum);
	sub=a-b;
	printf("\nThe result of the subtraction is=%d",sub);
	mul=a*b;
	printf("\nThe result of the multiplication is=%d",mul);
	division=a/b;
	printf("\nThe result of the division is=%f",division);
	rem=a%b;
	printf("\nThe result of the remainder is=%d",rem);
	return 0;
}
