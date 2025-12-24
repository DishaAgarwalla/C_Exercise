#include <stdio.h>
#include<stdlib.h>
void create(int a[],int *n)
{
    int i;
    printf("enter the number of elements:\n");
    scanf("%d",n);
    printf("Enter data into the array:\n");
    for(i=0;i<*n;i++)
        scanf("%d",&a[i]);
}
void traverse(int a[],int lb,int ub)
{
    int i;
    printf("Content of Array is:\n");
    for(i=lb;i<=ub;i++)
        printf("%d\t",a[i]);
        traverse(a,0,n-1);
            break;
}

