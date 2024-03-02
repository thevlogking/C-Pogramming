#include<stdio.h>
int sum(int);
int s=0;
int main()
{
int n,result;
printf("\nEnter value of n: ");
scanf("%d",&n);
result=sum(n);
printf("Sum of digits= %d\t",result);
return 0;
}

int sum (int n)
{
	if (n==0)
	return s;
	else
	{ 
	s=s+n%10;
	sum (n/10);
    }
	
	
}
