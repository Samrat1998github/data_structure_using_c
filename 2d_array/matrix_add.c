#include<stdio.h>
#include<stdlib.h>



int main()
{
	int arr1[30][30],arr2[30][30],i,j,m,n,sum=0;
	printf("enter no. of rows..: ");
	scanf("%d",&m);
	printf("enter no. of columns..: ");
	scanf("%d",&n);
	
	printf("\nenter elements of 1st matrix...\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nelement of [%d][%d]...:",i+1,j+1);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\nenter elements of 2nd matrix...\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nelement of [%d][%d]...:",i+1,j+1);
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("\n");
	printf("\n1st matrix is...\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",arr1[i][j]);
			//scanf("%d";&arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n2nd matrix is...\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",arr2[i][j]);
			//scanf("%d";&arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\nsum of two matrix is...\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=arr1[i][j]+arr2[i][j];
			printf("\t%d",sum);
			//scanf("%d";&arr1[i][j]);
		}
		printf("\n");
	}
	return 0;
}
