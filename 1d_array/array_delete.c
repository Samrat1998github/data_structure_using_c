#include<stdio.h>
#include<stdlib.h>


void create_array(int *,int);
void show(int *,int);
void array_delete(int *,int);
void array_insert(int *,int);

int main()
{
	int m,n,arr1[30],arr2[30];
	printf("\nenter the size of 1st array: ");
	scanf("%d",&m);
	create_array(arr1,m);
	/*printf("\nenter the size of 2nd array: ");
	scanf("%d",&n);
	create_array(arr2,n);
	printf("\n1st array is.......\n");
	show(arr1,m);
	printf("\n2nd array is.......\n");*/
	show(arr1,m);
	array_delete(arr1,m);
	array_insert(arr1,m);
	return 0;
}


void array_delete(int *a,int m)
{
	int i=0,j=0,pos=0;
	printf("\nenter position : ");
	scanf("%d",&pos);
	if(pos>=m || pos<=0)
	{
		printf("\nenter valid position.......");
	}
	else
	{
		for(i=pos-1;i<m;i++)
			a[i]=a[i+1];
		m--;	
	}
	
	printf("\nfinal array is.......\n");
	show(a,m);
}

void array_insert(int *a,int m)
{
	int i=0,j=0,pos=0,val=0;
	printf("\nenter position : ");
	scanf("%d",&pos);
	printf("\nenter value: ");
	scanf("%d",&val);
	if(pos>=m || pos<=0)
	{
		printf("\nenter valid position.......");
	}
	else
	{
		for(i=m-1;i>=pos-1;i--)
			a[i+1]=a[i];
		a[pos-1]=val;
		m++;	
	}
	
	printf("\nfinal array is.......\n");
	show(a,m);
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
