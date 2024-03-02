#include <stdio.h>
int main()
{
	int n, count, sum=0, m;
	printf ("Enter the number: ");
	scanf ("%d", &n);
	while (n>0)
	{
		m=n%10;
		sum=sum+m;
		count=count+1;
		n=n/10;
	}
	printf ("The sum of the digits is: %d", sum);
	printf ("\n The total number of digits are: %d", count);
	return 0;
}
