//IMPLEMENTATION OF STACKS USING ARRAY

//GLOBAL IMPLEMENTATION
/* #include<stdio.h>
#include<stdlib.h>
#define maxsize 5

int stack[maxsize];
int top=-1;

void push()
{
    int x;
    scanf("%d",&x);
    if(top>=maxsize-1)
    {
        printf("Overflow");
    }
    else
    {
        top+=1;
        stack[top]=x;
    }
}

int pop()
{
    if(top<=-1)
    {
        printf("Underflow");
    }
    else
    {
        int temp=stack[top];
        top-=1;
        return temp;
    }
}

//void delete

void peek()
{
    if(top <=-1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("%d",stack[top]);
    }
}

void display()
{
    if(top<=-1)
    {
        printf("Stack is empty");
    }
    else
    {
        if(top=0)
        {
            printf("%d",stack[top]);
        }
        else
        {
            for(int i=0;i<top;i++)
            {
                printf("%d",stack[i]);
            }
        }
        
    }
}


void main()
{  
    int choice;
    while(choice !=6)
    {
        printf("Press 1 to push \n Press 2 to pop \n Press 3 to delete \n Press 4 to peek \n Press 5 to display \n Press 6 to exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                int x=pop();
                printf("Element popped is %d \n",x);
                break;
            case 3:
                //delete();
                break;
            case 4:
                peek();
                break;
            case 5:
                display();
            case 6:
                exit(0);
        }
    }
    

} */

//IMPLEMENTATION BY PASSING ARRAY
#include<stdio.h>
#include<stdlib.h>
#define maxsize 5



void push(int *stack,int *top)
{
    int x;
    scanf("%d",&x);
    if(*top>=maxsize-1)
    {
        printf("Overflow");
    }
    else
    {
        *top+=1;
        stack[*top]=x;
    }
}

int pop(int *stack,int *top)
{
    if(*top<=-1)
    {
        printf("Underflow");
    }
    else
    {
        int temp=stack[(*top)];
        *top-=1;
        return temp;
    }
}

//void delete

void peek(int *stack,int *top)
{
    if((*top) <=-1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("%d",stack[(*top)]);
    }
}

void display(int *stack,int *top)
{
    if((*top)<=-1)
    {
        printf("Stack is empty");
    }
    else
    {
        if((*top)=0)
        {
            printf("%d",stack[(*top)]);
        }
        else
        {
            for(int i=0;i<(*top);i++)
            {
                printf("%d",stack[i]);
            }
        }
        
    }
}


void main()
{  
    int choice;
    int stack[maxsize];
    int top=-1;
    while(choice !=6)
    {
        printf("Press 1 to push \n Press 2 to pop \n Press 3 to delete \n Press 4 to peek \n Press 5 to display \n Press 6 to exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push(stack,&top);
                break;
            case 2:
                int x=pop(stack,&top);
                printf("Element popped is %d \n",x);
                break;
            case 3:
                //delete();
                break;
            case 4:
                peek(stack,&top);
                break;
            case 5:
                display(stack,&top);
            case 6:
                exit(0);
        }
    }
    

}