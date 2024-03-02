#include <stdio.h>
int main()
{
	int i,n,j,k;
	i=1;
	printf ("Enter a number: ");
	scanf ("%d", &n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<2*(n-i)-1;j++)
		{
			printf (" ");
		}
		for (k=0;k<=i;k++)
		{
			printf ("%d ",k+1);
		}
		printf ("\n");
	}
	return 0;
}
