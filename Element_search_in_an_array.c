#include<stdio.h>
int linear_search(int *arr,int n,int se)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==se)return i;
	}
	 return -1;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int se;
	scanf("%d",&se);
	int s=linear_search(arr,n,se);
	if(s==-1)
	{
		printf("False");
	}
	else
	{
		printf("True");
	}
}