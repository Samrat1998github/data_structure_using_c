#include<stdio.h>
#include<stdlib.h>



int main()
{
	int arr1[30][30],i,j,m,n,sum=0;
	printf("enter no. of rows..: ");
	scanf("%d",&m);
	printf("enter no. of columns..: ");
	scanf("%d",&n);
	
	printf("\nenter elements of matrix...\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\nelement of [%d][%d]...:",i+1,j+1);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\n");
	printf("\nthe matrix is...\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("\t%d",arr1[i][j]);
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			if(i==j)
				sum+=arr1[i][j];
	}
	printf("\n");
	printf("\nsum of diagonal elements is= %d\n",sum);
	return 0;
}
