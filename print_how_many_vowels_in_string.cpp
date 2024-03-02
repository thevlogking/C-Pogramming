#include <stdio.h>
#include<string.h>
int main()
{
	int i,j,c=0,l=0;
	char a[10];
	puts("Enter string: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	printf("The length of the array is: %d", c);
	for(i=0;i<c;i++)
	{
	
		if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
	{
		l++;
	}
	}
		printf("\nThe number of vowels: %d", l);
	return 0;
}
