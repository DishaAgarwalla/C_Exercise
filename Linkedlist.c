 #include<stdio.h>
#include<stdlib.h>
struct node//self-referential structure.
{
	int info;
	struct node * link;
};
struct node * create(struct node * start)
{
	struct node * new;
	int item;
	new = (struct node *)malloc(sizeof(struct node));
	if(new==NULL)
	   printf("\nOVERFLOW\n");
	else
    {
    	printf("\nEnter item:\n");
    	scanf("%d", &item);
    	new->info = item;
    	new->link = NULL;
    	start = new;
	}
}
void traverse(struct node * start)
{
	struct node * ptr=start;
	printf("\nSLL contains:\n");
	while(ptr != NULL)
	{
		printf("%d\t", ptr->info);
		ptr=ptr->link;
	}
}struct node * insert_beg(struct node * start)
{
	 
	struct node * new;
	int item;
	new = (struct node *)malloc(sizeof(struct node));
	if(new==NULL)
	   printf("\nOVERFLOW\n");
	else
    {
    	printf("\nEnter item:\n");
    	scanf("%d", &item);
    	new->info = item;
    	new->link = NULL;
    	if(start == NULL)
    	start = new;
    	else
    	{
    		new -> link=start;
    		start = new;
		}
		traverse(start);
	}
	return(start);
}
struct node * insert_loc(struct node * start)
{
	struct node * new,*ptr,*prev;
	int item,loc,i;
	new = (struct node *)malloc(sizeof(struct node));
	if(new==NULL)
	   printf("\nOVERFLOW\n");
	else
    {
    	printf("\nEnter item:\n");
    	scanf("%d", &item);
    	printf("\nEnter Loc:\n");
    	scanf("%d",&loc);
    	new->info = item;
    	new->link = NULL;
    	if(start == NULL)
    	start = new;
    	else
    	{
    	 ptr=start;i=1;
    	 while(i<loc&&ptr!=NULL)
    	 {
    	 	prev=ptr;
    	 	ptr=ptr->link;
    	 	i++;
		 }
		 if(ptr==NULL)
		   printf("\nLOC not exist\n");
		   else
		{
		 new->link=ptr;
		 prev->link=new;
	    } 
		 
    		
		}
		traverse(start);
	}
	return(start);
}
main()
{
	struct node * start = NULL;
	int op;
	start = create(start);
	do
	{
		printf("\nMenu:\n1.Traversal\n2.insert_beg\n3inset_Loc\n5.Exit\n");
		printf("\nEnter your choice:\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:traverse(start);break;
			case 2:start = insert_beg(start);break;
			case 3:start = insert_loc(start);break;
			case 4:exit(0);
		}
	}while(op <5);
}
