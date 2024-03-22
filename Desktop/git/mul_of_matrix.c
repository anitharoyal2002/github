#include<stdio.h>
#include<stdlib.h>
#define ROW1 3
#define COL1 2
#define ROW2 COL1
#define COL2 2
int main()
{
	int mat1[ROW1][COL1],mat2[ROW2][COL2],mat3[ROW1][COL2],i,j,k;
	printf("enter the elements for matrix 1 : ");
	for(i=0;i<ROW1;i++)
	{
		for(j=0;j<COL1;j++)
		{

			printf("enter the elements %d",mat1[i][j]);
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("\n");
	printf("enter the elements for matrix2 : \n");
	for(i=0;i<ROW2;i++)
	{
		for(j=0;j<COL2;j++)
		{
			printf("enter the element %d",mat2[i][j]);
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<ROW1;i++)
	{
		for(j=0;j<COL2;j++)
		{
			mat3[i][j]=0;
			for(k=0;k<COL2;k++)
			{
				mat3[i][j] +=mat1[i][k]*mat2[k][j];
			}
		}
	}
	printf("\n");
	printf("the multiplication of matrix is :\n");
	for(i=0;i<ROW1;i++)
	{
		for(j=0;j<COL1;j++)
		{
			printf("%5d",mat3[i][j]);
		}
	}
}
