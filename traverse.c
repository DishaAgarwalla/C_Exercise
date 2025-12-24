#include<stdio.h>
#include<conio.h>
void main(int a[],int*n)
{
	
int i;
printf("Enter the size of the array");
scanf("&d",&n);
printf("Eneter the elements of array");
for(i=0;i<n;i++)
{ 
scanf("%d",&a[i]);	
}
 printf("Elemnts in ana array;");
  for (i=0;i<n;i++)
  {
  	printf("&d",a[i]);
  }
}
  
