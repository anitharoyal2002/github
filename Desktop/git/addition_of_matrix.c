#include<stdio.h>
#include<stdlib.h>
#define ROW 3
#define COL 2
int main()
{
        int mat1[ROW][COL],mat2[ROW][COL],mat3[ROW][COL],i,j,k;
        printf("enter the elements for matrix 1 : ");
        for(i=0;i<ROW;i++)
        {
                for(j=0;j<COL;j++)
                {

                        printf("enter the elements %d",mat1[i][j]);
                        scanf("%d",&mat1[i][j]);
                }
        }
        printf("\n");
        printf("enter the elements for matrix2 : \n");
        for(i=0;i<ROW;i++)
        {
                for(j=0;j<COL;j++)
                {
                        printf("enter the element %d",mat2[i][j]);
                        scanf("%d",&mat2[i][j]);
                }
        }
        printf("\n");
        for(i=0;i<ROW;i++)
        {
                for(j=0;j<COL;j++)
                {
                        mat3[i][j] =mat1[i][j]+mat2[i][j];
                }
        }
        printf("\n");
        printf("the addition of matrix is :\n");
        for(i=0;i<ROW;i++)
        {
                for(j=0;j<COL;j++)
                {
                        printf("%5d",mat3[i][j]);
                }
        }
}

