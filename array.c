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
}
void insert(int a[],int *n,int item,int pos)
{
    int i=*n-1;
    while(i>pos-1)
    {
        a[i+1]=a[i];
        i--;
    }
    a[pos-1]=item;
    (*n)++;
    printf("\n\nAfter insertion the array is:\n");
    traverse(a,0,*n-1);
}
void delete(int a[],int *n,int pos)
{
    int i,item=a[pos-1];
    for(i=pos-1;i<*n;i++)
        a[i]=a[i+1];
    (*n)--;
    printf("\nItem Deleted:%d\nAfter Deletion the Array is:\n",item);
    traverse(a,0,*n-1);
}
void linear_search(int a[],int n,int s)
{
    int i;
    for(i=0;i<n;i++)
        {
            if(a[i]==s)
            {
                printf("\n%d found at %d location ",s,i+1);
                break;
            }
            if(i==n)
            {
                printf("\n%d not found",s);
            }
        }
}
void bubble_sort(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<(n-i)-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\nAfter sorting the array elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    
}
int main() {
   int a[100],op,n,pos,item,s;
   create(a,&n);
   do
   {
       printf("\nMENU:\n1.Display\n2.Insert\n3.Delete\n4.Search\n5.Sort\n6.Exit\n\nEnter your choice:");
       scanf("%d",&op);
       printf("\n");

   switch(op)
   {
    case 1:traverse(a,0,n-1);
            break;
    case 2:printf("Enter the item and position of Insertion:\n");
        scanf("%d%d",&item,&pos);
        insert(a,&n,item,pos);
        break;
    case 3:printf("Enter the position for Deletrion:\n");
        scanf("%d",&pos);
        delete(a,&n,pos);
        break;
    case 4:printf("enter the elements to be searched:\n");
        scanf("%d",&s);
        linear_search(a,n,s);
        break;
    case 5:bubble_sort(a,n);
            break;
    case 6:exit(0);
   }
   }while(op<7);
   system("pause");
 return 0;
}

