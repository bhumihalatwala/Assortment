#include<stdio.h>

//Print Transpose Matrix

int main()
{
	int i,j,size;
	
	printf("Enter number of rows and columns: ");
	scanf("%d",&size);
	
	int a[size][size];
	
	printf("Enter Array's elements: \n");
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int b[size][size];
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			b[j][i] = a[i][j];
		}
	}
	
	printf("The Transpose matrix of an array: \n");
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
