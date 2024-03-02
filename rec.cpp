#include<stdio.h>
int digit(int);
int main()
{
int n,result;
printf("\nEnter value of n: ");
scanf("%d",&n);
result=digit(n);
printf("Sum of the digits= %d\t",result);
return 0;
}

int digit (int n)
{
	if(n==0)
    return 0;
	else
	return (n%10+digit(n/10));
}


