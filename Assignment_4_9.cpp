#include <stdio.h>
int main (int argc, char const *argv[])
{
	int i, j, n;
	printf ("Enter a number: ");
	scanf ("%d",&n);
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=n; j++)
		{
			if (j==n/2+1 || i==n/2+1 || i==j || i+j==n+1
			)
			printf ("*");
			else
			printf (" ");
		}
		printf ("\n");
	}
	return 0;
}
