#include<stdio.h>
int main()
{
	int a[20],i,n,key,found=0,position=i;
	printf("How many elements?");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter element to search:\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			found=1;
			position=i;
		}
		if(found==1)
		printf("Element found at index %d\n",position);
		else
		printf("Element is not found\n",position);
	}
}
