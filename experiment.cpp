#include <stdio.h>
int main()
{
	int n,i;
	printf("Enter the number: ");
	scanf("%d", &n);
	printf("Natural numbers are: ");
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
	}
	return 0;
}
