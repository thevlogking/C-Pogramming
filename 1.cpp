#include <stdio.h>
int main ()
{
	int a, b, c, ch;
	float n,r;
	printf ("Press 1 for Addition \n Press 2 for Subtraction \n Press 3 for Multiplication \n Press 4 for Division \n Press 5 for Remainder Value");
	printf ("\n\nEnter The number here.: ");
	scanf ("%d", &ch);
	switch (ch)
	{
		case 1:
		{
		printf ("Enter the 1st number: ");
		scanf ("%d", &a);
		printf ("Enter the 2nd number: ");
		scanf ("%d", &b);
		c=a+b;
		printf ("The answer is %d", c);	
			break;
		}
	case 2:
		{
		printf ("Enter the 1st number: ");
		scanf ("%d", &a);
		printf ("Enter the 2nd number: ");
		scanf ("%d", &b);
		c=a-b;
		printf ("The answer is %d", c);	
			break;
		}
		case 3:
		{
		printf ("Enter the 1st number: ");
		scanf ("%d", &a);
		printf ("Enter the 2nd number: ");
		scanf ("%d", &b);
		c=a*b;
		printf ("The answer is %d", c);	
			break;
		}
		case 4:
		{
		printf ("Enter the 1st number: ");
		scanf ("%d", &a);
		printf ("Enter the 2nd number: ");
		scanf ("%d", &b);
		n=(float)a/b;
		printf ("The answer is %f", n);	
			break;
		}
		case 5:
			{
			printf ("Enter the 1st number: ");
		scanf ("%d", &a);
		printf ("Enter the 2nd number: ");
		scanf ("%d", &b);
		r=a%b;
		printf ("The answer is %f", r);	
			break;
			}
		default:
			printf ("Please enter the right choice");
			break;
	}
	return 0;
}
