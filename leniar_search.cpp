#include <stdio.h>
int main()
{

int a[10],n,i,flag=0,p;
printf("Enter the length of the array: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Enter elements on array: ");
	scanf ("%d", &a[i]);
}
for (i=0;i<n;i++)
{
	printf("%d\t", a[i]);
}
printf("\n");
printf("Enter the element to search for: ");
scanf("%d",&p);
for (i=0;i<n;i++)
{
	if(a[i]==p)
	{
		flag=1;
		break;
	}
}
if (flag==1)
printf("Element found");
else
printf("Element not found");
return 0;
}
