#include <stdio.h>
#include<string.h>
int main()
{
	int i,j,c=0;
	char a[10];
	puts("Enter string: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	printf("The length of the array is: %d", c);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
		a[i]=a[i]-32;
	    }
	    else
	    {
	    	a[i]=a[i]+32;
		}
	}
	printf("\nThe change case of the string is: %s", a);
	return 0;
}
