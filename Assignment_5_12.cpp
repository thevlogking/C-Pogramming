#include <stdio.h>
int main ()
{
int i,j,k,n;
printf ("Enter the number: ");
scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
	for (k=n;k>=i;k--)
	printf (" ");
	for (j=1;j<=i;j++)
	{  
	printf("* ");
	printf ("\n");
    }
    }
    for (i=1;i<=n;i++)
    {
	for(i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		printf(" ");
		for (k=n;k>=i;k--)
		{
		printf("* ");
		printf("\n");
	    }
	}
}

	return 0;
}
