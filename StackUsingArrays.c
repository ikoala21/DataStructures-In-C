#include<stdio.h>
#define SIZE 10
void push();
void pop();
void display();
int stack[SIZE],top=-1;
int main()
{
    int choice;
    while(1)
    {
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
        }
    }
}
void push()
{
    int value;
    if(top==SIZE-1)
        printf("Stack Overflow");
    else
    {
        printf("Read the element: ");
        scanf("%d",&value);
        top++;
        stack[top]=value;
    }
}
void pop()
{
    if(top==-1)
        printf("Stack Underflow");
    else
    {
       printf("Deleted Item is %d\n",stack[top]);
       top--;
    }
}
void display()
{
    int i;
    if(top==-1)
        printf("No elements in the stack");
    else
    {
        for(i=top;i>=0;i--)
            printf("%d ",stack[i]);
        printf("\n");
    }
}


