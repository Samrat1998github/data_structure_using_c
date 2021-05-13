#include<stdio.h>
#include <stdlib.h>

void create_array(int *,int);
void show(int *,int); 
void sort_merge(int *,int *,int,int);


int main()
{
	int m,n,arr1[30],arr2[30],i;
	printf("enter the size of 1st array: ");
	scanf("%d",&m);
	create_array(arr1,m);
	printf("enter the size of 2nd array: ");
	scanf("%d",&n);
	create_array(arr2,n);
	printf("\nthe 1st array is...........\n");
	show(arr1,m);
	printf("\nthe 2nd array is...........\n");
	show(arr2,n);
	sort_merge(arr1,arr2,m,n);
	return 0;
}

void sort_merge(int *a,int *b,int m,int n)
{
	int i=0,j=0,k=0,*sort,f;
	f=m+n;
	sort=(int *)malloc(f*sizeof(int));
	while(j<m && k<n)
	{
		if(*(a+j)>*(b+k))
		{
			*(sort+i)=*(b+k);
			k++;
			i++;
		}
		else
		{
			*(sort+i)=*(a+j);
			j++;
			i++;
		}	
	}
	while(j<m)
	{
		*(sort+i)=*(a+j);
		j++;
		i++;
	}
	while(k<n)
	{
		*(sort+i)=*(b+k);
		k++;
		i++;
	}	
	printf("\nfinal array is......\n");
	show(sort,f);
}


void create_array(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",(a+i));
	}
}

void show(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
