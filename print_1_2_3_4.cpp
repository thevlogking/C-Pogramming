#include <stdio.h>
int main()
{
	int i, n;
	printf ("Enter the value of n ");
	scanf ("%d", &n);
	i=1;
	while (i<=n)
	{
		printf ("%d", i);
		i++;
		printf ("\n");
	}
	return 0;
}
