#include<stdio.h>
#include<stdlib.h>



int main()
{
	int arr1[30][30],arr2[30][30],i,j,k,m1,n1,m2,n2,sum=0;
	printf("enter no. of rows in 1st matrix ..: ");
	scanf("%d",&m1);
	printf("enter no. of columns in 1st matrix..: ");
	scanf("%d",&n1);
	
	printf("\nenter elements of 1st matrix...\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			printf("\nelement of [%d][%d]...:",i+1,j+1);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("enter no. of rows in 2nd matrix ..: ");
	scanf("%d",&m2);
	printf("enter no. of columns in 2nd matrix..: ");
	scanf("%d",&n2);
	
	printf("\nenter elements of 2nd matrix...\n");
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("\nelement of [%d][%d]...:",i+1,j+1);
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("\n");
	printf("\n1st matrix is...\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
			printf("\t%d",arr1[i][j]);
		printf("\n");
	}
	printf("\n");
	printf("\n2nd matrix is...\n");
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
			printf("\t%d",arr2[i][j]);
		printf("\n");
	}
	printf("\n");
	if(n1==m2)
	{
		printf("\nresultant matrix after multiplication is...\n");
		for(i=0;i<m1;i++)
		{
			printf("\n");
			for(j=0;j<n2;j++)
			{
				sum=0;
				printf("\t");
				for(k=0;k<n1;k++)
				{
					sum+=arr1[i][k]*arr2[k][j];
				
				}
				printf("%d",sum);
			}
		}
	}
	else
	{
		printf("\nmultiplication not possible......\n");
	}	
	return 0;
}
