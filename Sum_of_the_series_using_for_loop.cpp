#include <stdio.h>
int main()
{
	int s=0, n, i;
	printf ("Enter the number ");
	scanf ("%d", &n);
	  
	for (i=1; i<=n; i++)
	{
		 s=s+i;
	
	}
	 printf ("The sum of the series is= %d", s);
	return 0;
}
