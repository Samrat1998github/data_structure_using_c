#include<stdio.h>



int main()
{
	int arr[30][30],i,j,m,n,count=0;
	printf("enter the no of raws  : ");
	scanf("%d",&m);
	printf("enter the no of cols  : ");
	scanf("%d",&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			printf("\nenter element at [%d][%d] :  ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
			
	printf("\nthe matrix is  : \n");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
			printf("\t%d",arr[i][j]);
	}	
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(arr[i][j]==0)
				count++;
	if(count>(m*n)/2)
		printf("\nsparse matrix.........\n");
	else
		printf("\nnot a sparse matrix.........\n");					
	
	return 0;
}
