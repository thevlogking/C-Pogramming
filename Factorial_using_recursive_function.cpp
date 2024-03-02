#include<stdio.h>
int fact(int);
int main()
{
int n,result;
printf("\nEnter value of n: ");
scanf("%d",&n);
result=fact(n);
printf("Factorial= %d\t",result);
return 0;
}

int fact(int n)
{
if(n==0)
 return 1; 
 else
 return(n*fact(n-1)); 
}
