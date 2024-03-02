#include <stdio.h>
int main ()
{
	int a;
	printf("Enter the no.: ");
	scanf("%d",&a);
	if (a>0)
	{
	printf("The no. is posetive");
	}
	else if(a<0)
	{
	printf ("The no. is negetive");
	}
	else
	{
	printf("The no. is zero");
    }  
	return 0;
}

