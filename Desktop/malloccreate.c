#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
	int i,*ptr;
	ptr=(int *)malloc(5*sizeof(int));
	if(ptr==NULL)
	{
		printf("memory not sufficient \n");
	}
	else
	{
		for(i=0;i<5;i++)
		{
			printf("enter the element %d   :",i+1);
			scanf("%d",&ptr[i]);
		}
	}
	printf("entered numbers are :\n ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",ptr[i]);
	}

}

