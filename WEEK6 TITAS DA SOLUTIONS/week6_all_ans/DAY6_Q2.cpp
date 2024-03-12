#include<stdio.h>
int main()
{
	int arr[25], i, j,n,temp;
	printf("ENTER SIZE OF ARRAY\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	///array sorting
	for(i=0;i<n;i++)
	{
		for(j=i+1; j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("SORTED ARRAY\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t", arr[i]);
	}
	///array arranhge
	int arrayIndex=0;
	int tempArr[50];
	for(i=0,j=n-1;i<=n/2 || j>n/2 ; i++,j--)
	{
		if(arrayIndex<n)
		{
			tempArr[arrayIndex]=arr[i];
			arrayIndex++;
		}
		
		if(arrayIndex<n)
		{
			tempArr[arrayIndex]=arr[j];
			arrayIndex++;
		}
	}
	printf("\n");
	//store
	printf("ACCORDING TO QUESTION\n");
	for(i=0;i<n;i++)
	{
		arr[i]=tempArr[i];
	}
	
	//display
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
