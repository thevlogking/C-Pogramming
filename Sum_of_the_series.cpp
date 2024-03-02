#include <stdio.h>
int main()
{
	int s, n, i;
	printf ("Enter the number ");
	scanf ("%d", &n);
	i=1;
	s=0;
	while (i<=n)
	{
		s=s+i;
		i++;
	}
	printf ("The sum of the series is= %d", s);
	return 0;
}
