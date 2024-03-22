#include<stdio.h>
#include<string.h>
#define SIZE 10
int main()
        int arr[SIZE];
        int i,j,temp;
        for (i=0;i<SIZE;i++)
        {
                printf("enter the element %d : ",i+1);
                scanf("%d",&arr[i]);
        }
        printf("original array is : \n");
        for(i=0;i<SIZE;i++)
        {
                printf("%d\t",arr[i]);
        }
        print("\n");
        printf("after ascending order the array is : \n");
        for(i=0;i<SIZE;i++)
        {
                for(j=i+1;j<SIZE;j++)
                {
                        if(arr[i]<arr[j])
                        {
                                temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                        }
                }
        }
 }



