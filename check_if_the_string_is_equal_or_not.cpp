#include <stdio.h>
#include<string.h>
int main()
{
	int i,temp=0;
	char a[10], b[10];
	puts("Enter 1st string: ");
	gets(a);
	puts("Enter 2nd string: ");
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]!=b[i])
		{
		
		temp=1;
		break;
	}
	}
		
    if(temp==0)
    printf("\nNot Equal");
    else
    printf("\nEqual");
	return 0;
}	
	
