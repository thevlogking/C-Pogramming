#include <stdio.h>
int main ()
{
	int i, st, end, even=0, odd=0;
	printf ("Enter the starting range: ");
	scanf ("%d", &st);
	printf ("Enter the ending range: ");
	scanf ("%d", &end);
	for (i=st; i<=end; i++)
	{
		if (i%2==0)
		even=even+i;
		else
		odd=odd+i;
    }
	 printf ("The sum of even numbers is: %d\n", even);
	 printf ("The sum of odd numbers is: %d\n", odd);
	 return 0;
}
