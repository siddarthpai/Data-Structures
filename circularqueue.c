#include<stdio.h>
#include<stdlib.h>
#define maxsize 5

int queue[maxsize];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if(front ==-1 && rear ==-1)
    {
        front =0;
        rear=0;
        queue[rear]=x;
    }
    else if((rear+1)%maxsize==front)  // condition to check queue is full  
    {  
        printf("Queue is overflow..");  
    }  
    else
    {
          rear=(rear+1)%maxsize;
          queue[rear]=x;
    }
}

void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("Underflow");
    }
    else if(front == rear)
    {
        printf("%d",queue[front]);
        front =-1;
        rear = -1;
    }
    else
    {
        printf("The dequeued element is = %d",queue[front]);
        front=(front+1)%maxsize;
    }

}

void display()
{
    if(front == -1 && rear == -1)
    {
        printf("Empty Array");
    }
    else
    {
        int i=0; 
        printf("\nElements in a Queue are :");  
        while(i<=rear)  
        {  
            printf("%d,", queue[i]);  
            i=(i+1)%maxsize;  
        } 
    }
}
void main()
{
    enqueue(5);
    display();
    enqueue(6);
    enqueue(7);
    display();
    dequeue();
    display();
}