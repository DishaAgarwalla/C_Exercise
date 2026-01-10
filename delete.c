#include<stdio.h>
int main()
{
	
int a[10],i,val,flag=0;
for(i-0;i<10;i++)
{
	printf("enter number:");
}
 printf("Enetr element to remove");
 scanf("%d",&val);
 printf("original array");
 for(i=0;i<10;i++)
 {
 	 printf("%d/t",a[i]);
 }
 for(i=0;i<10;i++)
 {
 	if(a[i]==val)
{ 
  flag-1;
  break;
}
 }
 if(flag==0)
 printf("Enetr elemnt not found");
 else
 {
 	for(i=0;i<5;i++)
 	{
 		a[i]=a[i+1];
	 }
	 printf("Modified array");
	 for(i=0;i<5;i++)
	 {
	 	printf("%d/t",a[i]);
	 }
	  }
	  return 0;
}

