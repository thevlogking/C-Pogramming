#include <stdio.h>
int main()
{
	int i,j, a[3][3];
	printf("Enter a matrix:\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
	printf("Enter element on row %d, coloumn %d: ",i+1,j+1);
	scanf("%d",&a[i][j]);
        }
    }
     printf("\n1st matrix:\n");
        for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
    printf("The lower matrix are:\n");
    for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		if(i==j || i+j==2)
			printf("%d\t",a[i][j]);
			else
			printf("\t");
		}
		printf("\n");
	}
	return 0;
}
    
    
