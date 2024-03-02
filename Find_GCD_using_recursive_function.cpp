#include<stdio.h>
int GCD(int,int );
int main()
{
int a,b,result;
printf("\nEnter TWO values: ");
scanf("%d%d",&a,&b);
result=GCD(a,b);
 printf("%d\t",result);
 return(0);
}
int GCD(int a,int b)
{
if( (a>=b ) && (a%b)==0)
 return(b); 
 
 else
 GCD(b,a%b); 
}
