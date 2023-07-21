#include<stdio.h>
#include<stdlib.h>
#define max 5

int stack[max];
int i;
int top=-1;
int choice;
int value;

    void push(int ele)
    {
        if(top==max-1)
        {
            printf("overflow");
        }
        else
        {
            printf("\nthe element is pushed");
            scanf("%d",&ele);
            top=top+1;
            stack[top]=ele;
        }
    }
    void pop(int ele)
    {
        if(top==-1)
        {
            printf("underflow");
        }
        else
        {
            value=stack[top];
            printf("%d",stack[top]);
            top=top-1;
        }
    }
    void display(int ele)
    {
        if(top==-1)
        {
            printf("stack is empty");
        }
        else{
            for(i=top;i>=0;i--)
            {
                printf("%d",stack[i]);
            }
        }
    }
    int main()
    {
        int top=-1;
        int ele;
        for(;;)

    {
     printf("\nstack operations");
     printf("\n1.push \n2.pop \n3.display");

     while(1)
     {
     printf("\nenter the choice:");
     scanf("%d",&choice);

     switch(choice)
     {
        case 1:
        push(ele);
        break;
        case 2:
        pop(ele);
        break;
        case 3:
        display(ele);
        break;

        default:
        printf("nothing");
     }
    }
    }
    return 0;
    }
