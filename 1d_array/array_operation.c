#include<stdio.h>


/*

int create(int n)
{
	int a[30],i=0;
	
	for(i;i<n;i++)
	{
		printf("\nenter element %d :",i+1);
		scanf("%d",&a[i]);
	}
	return a;
}
void show(int a[],int n)
{	
	int i;
	for(i;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}*/
int main()
{
	int arr[30],even[30],odd[30],i,j,k,n,max,min;
//	int create(int);
//	void show(int,int);
	printf("enter the size of the array: ");
	scanf("%d",&n);
	for(i;i<n;i++)
	{
		printf("\nenter element %d :",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nthe array is........");
	for(i=0;i<n;i++)
	{
		printf("\n%d",arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=1;i<n;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	for(i=1;i<n;i++)
	{
		if(min>arr[i])
			min=arr[i];
	}
	printf("\nminimum value is:  %d",min);
	printf("\nmaximum value is:  %d",max);
	
	
	for(i=0,j=0,k=0;i<n;i++)
	{
		if(arr[i]%2==0)
			even[j++]=arr[i];
		else
			odd[k++]=arr[i];
	}
	
	printf("\nthe even array is........");
	for(i=0;i<j;i++)
	{
		printf("\n%d",even[i]);
	}
	printf("\nthe odd array is........");
	for(i=0;i<k;i++)
	{
		printf("\n%d",odd[i]);
	}
	printf("\n");
	//arr=create(n);
	//show(arr,n);
	return 0;
}
