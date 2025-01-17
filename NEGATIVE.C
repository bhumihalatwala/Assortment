#include<stdio.h>

//Print negative elements from the array

int main()
{
	int i,size;
	
	printf("Enter Array size: ");
	scanf("%d",&size);
	
	int a[size];
	
	printf("Enter Array's elements: \n");
	
	for(i=0;i<size;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Negative Elements are: ");
	for(i=0;i<size;i++)
	{
		if(a[i]<0)
		{
			printf("%d ",a[i]);
		}
	}
	
	return 0;
}
