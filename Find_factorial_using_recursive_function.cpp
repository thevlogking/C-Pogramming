#include <stdio.h>
long fact(int);
int main()
{
    int n;
    long int r;
printf ("Enter a number: ");
scanf("%d",&n);
r=fact(n);
printf("The result is: %ld\t", r);
    return (0);
}

long int fact(int n)
{
    if (n==0)
    return (1);
    else
    return(n*fact(n-1));
}
