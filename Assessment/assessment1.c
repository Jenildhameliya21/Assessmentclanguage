//Assessment
#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],mul[100][100],i,j,k;
	printf("\n--------------Matrix: 1--------------");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n Enter The Element : ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("--------------Matrix: 2--------------");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n Enter The Element : ");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("-----------Result : Multiplication Matrix-----------\n");
	for(i=0;i<2;i++)
	{
		mul[i][j]=0;
		for(j=0;j<2;j++)
		{
			for(k=0;k<2;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
			printf("%d ",mul[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
