int fact(int n){
if(n==1)
{
    return 1;
}
else{
    return n*fact(n-1); 
}
}

void main()
{
    int r,num;
printf("Enter a number: ");
scanf("%d",&num);

r=fact(num);
printf("print factor is %d",r);

getch();
}


