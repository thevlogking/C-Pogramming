#include <stdio.h>
int main()
{
	int i,j,k=0, a[3][3],b[3][3],c[3][3];
	printf("Enter 1st matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
	printf("Enter element on row %d, coloumn %d: ",i+1,j+1);
	scanf("%d",&a[i][j]);
        }
    }
    printf("Enter 2nd matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
	printf("Enter element on row %d, coloumn %d: ",i+1,j+1);
	scanf("%d",&b[i][j]);
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
	    printf("\n2nd matrix:\n");
        for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{

		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
		printf("\n");
	}
	printf("The multiplication of two matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
