#include <stdio.h>
int main()
{
	int r=0, t, n, rev=0;
	printf ("Enter the number.: ");
	scanf ("%d", &n);
	t=n;
	while (n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf ("The reverse of this number is %d\n", rev);
	if (t==rev)
	printf ("This is a palindrome number");
	else
	printf ("This is not a palindrome number");
	return 0;
}
