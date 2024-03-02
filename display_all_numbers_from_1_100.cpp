#include <stdio.h>
int main ()
{
int i, n, flag, r;
int b;
for (b=1; b<=100; b++)
{
	n=b;
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
		printf ("%d\t", n);
	}
	return 0;
}
