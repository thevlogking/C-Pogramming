#include <stdio.h>
int main ()
{
	int i, n, flag, r;
	printf ("Enter the value of n: ");
	scanf ("%d", &n);
	flag=1;
	i=2;
	while (i<n)
	{
		r=n%i;
		if (r==0)
		{
			flag=0;
			break;
		}
		i++;
	}
	if (flag==1)
	printf ("%d is a prime number", n);
	else
	printf ("%d is not a prime number", n);
	return 0;
}
