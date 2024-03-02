#include<stdio.h>
int fibo(int );
int main()
{
int i,n;
printf("\nEnter value of n: ");
scanf("%d",&n);
for(i=0;i<n;i++)
 printf("%d\t",fibo(i));
 return 0;
}

int fibo(int n)
{
if(n==0)
 return 0;
else if(n==1)
 return 1;
 else
return(fibo(n-2)+fibo(n-1)); 
}
