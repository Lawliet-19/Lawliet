#include <stdio.h>
#include <conio.h>
int main()
{
	int a[2][3],b[2][3],c[2][3],i,j;
	printf("Enter the 1st matrix element\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the 2nd matrix element\n");
		for(i=0;i<2;i++)
	{
			for(j=0;j<3;j++)
			{
				scanf("%d",&b[i][j]);
			}
	}
	printf("matrix element after addition are:-  \n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
			}
		printf("\n");
		}
	
	return 0;
}
	
	
