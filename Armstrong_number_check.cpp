#include <stdio.h>
int main()
{
int n,t,rem,r;
r=0;

printf ("Enter a number: ");
scanf ("%d",&n);
t=n;
while (t!=0)
{
	rem=t%10;
	r=r+(rem*rem*rem);
	t=t/10;
}
if (r==n)
printf ("It is a armstrong number %d",n);
else
printf ("It is not a armstrong number %d",n);
return 0;
}
