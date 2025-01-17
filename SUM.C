#include<stdio.h>

//Print sum of elements from selected row and column

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
		printf("\n");
	}
	
	int input1;
	int sum1 = 0;
	
	printf("Enter row number: ");
	scanf("%d",&input1);
	
	if(input1<row)
	{
		printf("Elements of row %d: ",input1);
		
		for(j=0;j<col;j++)
		{
			printf("%d ",a[input1][j]);
			sum1 += a[input1][j];
		}
		printf("\n");
		printf("Sum of row %d: %d ",input1,sum1);
		printf("\n");
	}
	
	else
	{
		printf("Invalid Row!!!");
	}
	
	
	int input2;
	int sum2 = 0;
	
	printf("Enter column number: ");
	scanf("%d",&input2);
	
	if(input2<row)
	{
		printf("Elements of column %d: ",input2);
		
		for(i=0;i<row;i++)
		{
			printf("%d ",a[i][input2]);
			sum2 += a[i][input2];
		}
		printf("\n");
		printf("Sum of Column %d: %d ",input2,sum2);
		printf("\n");
	}
	
	else
	{
		printf("Invalid Column!!!");
	}
		
	return 0;
}
