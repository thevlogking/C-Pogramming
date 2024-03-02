#include<stdio.h>
int main()
{
	int n,r=0,max=0;
	printf ("Enter a number: ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r>max)
		{
		max=r;
	    }
	    n=n/10;
	}
	printf("The greatest among this number is: %d",max);
	return 0;
}
