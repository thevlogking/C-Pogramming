#include <stdio.h>
int sum(int x,int y)
{
	int s;
	s=x+y;
	return s;
}
int main()
{
	int a,b,c;
	printf("Enter 1st number: ");
	scanf ("%d", &a);
    printf("Enter 2nd number: ");
	scanf ("%d", &b);
	c=sum(a,b);
	printf ("The addition value is %d", c);
	return 0;	
}
