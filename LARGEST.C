#include<stdio.h>

//Print largest element from the array

int main()
{
	int i,j,row,col;
	
	printf("Enter row size: ");
	scanf("%d",&row);
	printf("Enter column size: ");
	scanf("%d",&col);
	
	int a[row][col];
	
	printf("Enter Array's elements: \n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int max = a[0][0];
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]>max)
			{
				max = a[i][j];
			}
		}
	}
	
	printf("The Largest Element is: %d",max);
	
	return 0;
}
