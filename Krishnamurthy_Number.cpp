#include <stdio.h>
int fact(int);
int main()
{
	int i,n,s,t,r,f;
	printf ("Enter a number: ");
	scanf ("%d", &n);
	i=1;
	s=0;
	for (t=n;t>0;t=t/10)
{
	r=t%10;
    f=fact(r);
	s=s+f;
}
if (n==s)
printf ("%d is a Krishnamurthy Number",n);
else
printf ("%d is not a Krishnamurthy Number",n);
return 0;
}
int fact(int x)
{
	int i,k=1;
	for(i=1;i<=x;i++)
	  k=k*i;
    return k;
}
