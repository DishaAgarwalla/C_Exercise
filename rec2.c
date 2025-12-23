int fabrinacci(int r){
int a=-1,b=1,c,i,s;
    for(i=0;i<r;i++)
	{
		c=a+b;
		s=printf("%d",c);
		a=b;
		b=c;
	}
	return c;
}

void main()
{
//	int r,a=0,b=1,c,i;

int r,s;
	printf("Enter a number : ");
	scanf("%d",&r);

s = fabrinacci(r);


	getch();
}
