#include<stdio.h>
int gcd(int, int);
int main()
{
int a,b,result;
printf("\nEnter 1st value: ");
scanf("%d",&a);
printf("\nEnter 2nd value: ");
scanf("%d",&b);
result=gcd(a,b);
printf("%d\t",result);
return 0;
}

int gcd(int a,int b)
{
	if((a>=b)&&(a%b)==0)
	return(b);
	else 
	gcd(b,a%b);
}


