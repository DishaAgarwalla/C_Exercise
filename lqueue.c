 
#include <stdio.h>
#include<stdlib.h>
#define N 5
int a,front=-1,rear=-1;
void enqueue();
void dequeue();
void peek();
void display();
int queue[N];

int main() {
    int choice,ch;
   
    
   while(ch=1){
        printf("Enter your choice:\n1.Enqueue\n2.Dequeue\n3.Peek\n4.Display:\n");
    scanf("%d",&choice);
        switch(choice) {
        case 1:
            enqueue();
            break;
        case 2:
           dequeue();
           break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("\nInvalid Choice :\n");
            
    }
    printf("\nDo you want to continue?\n");
   scanf("%d",&ch);
   }
   
}
void enqueue() {
    if(front==-1 && rear==-1) {
        front=rear=0;
         printf("\nEnter the number :");
            scanf("%d",&a);
        queue[rear]=a;
    }
    else if(front==N-1) {
       
        printf("Queue Overflow");
    }
    else{
          printf("\nEnter the number :");
            scanf("%d",&a);
        rear++;
        queue[rear]=a;
    }
    
}

void dequeue() {
    
    if(rear==-1 && front==-1) {
        printf("\nEmpty\n");
    }
    else {
        printf("Deleted item is %d",queue[front]);
        front++;
        
    
    }
}

void peek() {
    int item;
    item=queue[front];
    printf("Top/Peek item is %d",item);
}

void display(){
    int i;
    for(i=front; i<=rear; i++) {
        printf(" %d ",queue[i]);
    }
}

//Thanks Mam
