#include <stdio.h>
int main()
{
int i,n,a[10],sum=0;
float avg;
printf ("Enter how many elements: ");
scanf("%d", &n);
i=0;
while (i<n)
{
	printf ("Enter Value: ");
	scanf("%d", &a[i]);
	i++;
}
printf ("Values are: ");
i=0;
while(i<n)
{
	printf("%d\t", a[i]);
	i++;
}
for(i=0; i<n; i++)
{
    sum=sum+a[i];
}
printf ("The Sum of the values are: %d", sum);

avg=(float)sum/n;
 printf("The Average of the values are= %.2f",avg);

return 0;

}
