#include<stdio.h>

void tower(int n,char from,char to,char aux) // aux=C, to=B, from=A
{
    if(n==1)
    {
        printf("Move the disc from %c to %c\n ",from,to);
        return;
    }
    else
    {
        tower(n-1,from,aux,to);
        printf("Move the disc from %c to %c \n",from,to);
        tower(n-1,aux,to,from);
    }
}
void main()
{
    int n;
    printf("Enter the number of discs you want\n");
    scanf("%d",&n);
    tower(n,'A','B','C');
}

//NUMBER OF STEPS REQUIRED =2^n -1; 