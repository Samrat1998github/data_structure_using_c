#include<stdio.h>
#include<stdlib.h>


void create_array(int *,int);
void show(int *,int);
void union_array(int *,int *,int,int);

int main()
{
	int m,n,arr1[30],arr2[30];
	printf("\nenter the size of 1st array: ");
	scanf("%d",&m);
	create_array(arr1,m);
	printf("\nenter the size of 2nd array: ");
	scanf("%d",&n);
	create_array(arr2,n);
	printf("\n1st array is.......\n");
	show(arr1,m);
	printf("\n2nd array is.......\n");
	show(arr2,n);
	union_array(arr1,arr2,m,n);
	return 0;
}


void union_array(int *a,int *b,int m,int n)
{
	int i=0,j=0,k=0,final[30],flag;
	for(i=0,j=0;j<m;j++,i++)
		final[i]=a[j];
	for(k=0;k<n;k++)
	{
		flag=0;
		for(j=0;j<m;j++)
		{
			if(a[j]==b[k])
			{
				
				flag=1;
				break;
			}
			//printf("%d",flag);			
		}
		if(flag!=1)
		{
			final[i]=b[k];
			i++;
		}	
	}
	
	printf("\nunion array is.......\n");
	show(final,i);
}



void create_array(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",(a+i));
}

void show(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("\n%d",a[i]);
}		
