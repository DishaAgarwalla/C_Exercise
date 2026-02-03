#include<stdio.h>
int main()
{
	int a[10],pos,i,val;
	for(i=0;i<10;i++)
	{
		printf("Enter number:");
		scanf("%d",a[i]);
	}
	printf("Enetr position to insert:");
	scanf("%d",pos);
	printf("Enetr the value to insert");
	scanf("%d",&pos);
	printf("Enetr the value of array");
	scanf("%d",val);
	printf("original array");
	for(i=0;i<5;i++)
	{
		scanf("%d/t",a[i]);
	}
	for(i=4;i<pos;i--);
	{
		a[i]=a[i-1];
	}
	a[pos-1]=val;
	printf("updated array");
	for(i=0;i<10;i++)
	{
		printf("%d/t",a[i]);
	}
	return 0;
}


