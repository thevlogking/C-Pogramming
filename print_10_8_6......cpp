#include <stdio.h>
int main ()
{
	int i, n, a;
	printf ("Enter the number: ");
	scanf ("%d", &n);
	for (i=n; i>=1; i=i-2)
	{	
		printf ("%d\t", i);
	}
	return 0;
}
