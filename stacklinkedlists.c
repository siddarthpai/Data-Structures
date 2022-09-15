#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* top=NULL;

void push(int x)
{
    struct Node* temp= (struct Node*) malloc(sizeof(struct Node));
    temp->data=x;
    temp->next =top;//top is basically the address of the node the head is pointing to.
    top=temp;//temp is the address of the new node

}

void pop()
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    if(top==NULL)
    {
        printf("The stack is empty");
    }
    else
    {
        struct Node* temp= top;//top is the address its pointing to.
        top=top->next;
        free(temp);   
        
    }

}

void peek()
{
    struct Node* temp=top;
    printf("Top of stack is %d",temp->data);
}

void display()
{
    struct Node* temp=top;
    while (temp!=NULL)
    {
        printf("%d \n",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void main()
{
    push(5);
    display();
    push(6);
    display();
    push(7);
    display();
    pop();
    display();

}