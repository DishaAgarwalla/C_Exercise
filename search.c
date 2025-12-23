#include<stdio.h>

int main()
{ 
 int a[10];
 
 for(i=0;i<10;i++)
 {
  scanf("%d",a[i])
 }
 printf("Enter number to search:");
 scan("%d",&key);
 flag=0;
 
 for(i=0;i<10;i++)
 {
 if (a[i]==key)
{
 flag=1;
 pos=i+1
 break;
	}
 }
 if(flag==0)
 printf("Elemnts found at %d position",pos);
 
 reeturm 0;
}
    
