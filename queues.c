#include<stdio.h>
#include<stdlib.h>

#define maxsize 5
int queue[5];

void insert();
void delete();
void display();
void peek();
int front=-1,rear=-1;
void main()
{  
    int choice;
    while(choice !=5)
    {
        printf("Press 1 to insert \n Press 2 to delete \n Press 3 to dispaly\n Press 4 to peek \n Press 5 to exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                exit(0);
        }
    }
    

}

void insert()
{
    int x;
    printf("Enter element you want to insert \n");
    scanf("%d",&x);
    if(rear == maxsize-1)
    {
        printf("OVERFLOW \n");
        return; 
    }
    if(front == -1 && rear == -1)
    {
        front =0;
        rear= 0;

    }
    else
    {
        rear +=1;
    }

    queue[rear]=x;
    printf("Value added");
}

void delete()
{
    int item;
    if(front == -1 || front > rear)
    {
        printf("underflow");
        
    }
    else
    {
        item=queue[front];
        if(front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front +=1;
        }  
    }
    printf("Value deleted");
}

void display()
{
    if(rear == -1)
    {
        printf("Empty Queue \n");
    }
    else
    {
        printf("The list is \n");
        for (int i=front;i<=rear;i++)
        {
            printf("%d \n",queue[i]);
        }
    }
}

void peek()
{
    if(rear == -1)
    {
        printf("Empty Queue \n");
    }
    else
    {
        printf("The top of the queue is \n");
        printf("%d \n",queue[front]);
    }
}