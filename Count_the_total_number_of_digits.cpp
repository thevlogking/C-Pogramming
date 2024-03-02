#include <stdio.h>
int main()
{
	int n, digit;
	printf ("Enter the value of n ");
	scanf ("%d", &n);
	digit=0;
	while (n>0)
	{
		digit=digit+1;
		n=n/10;
	}
	printf ("The total number of digits are= %d", digit);
	return 0;
}
