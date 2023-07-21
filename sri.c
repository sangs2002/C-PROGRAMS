#include<stdio.h>
#include<stdlib.h>
#define max 3

int stack[max];
int i;
int rear=-1;
int front=-1;
int choice;
int value;

    void enqueue(int ele)
    {
        if(rear==max-1)
        {
            printf("overflow");
        }
        else
        {
            printf("\nthe element is enqueued:");
            scanf("%d",&ele);
            front =0;
            rear++;
            stack[rear]=ele;
        }
    }
    void dequeue(int ele)
    {
        if(front==-1||front==rear+1)
        {
            printf("underflow");
        }
        else
        {
            value=stack[front];
            printf("\n enter the element is dequeued");
            printf("%d",stack[front]);
            front++;
        }
    }
    void display(int ele)
    {
        if(front==-1||front==rear+1)
        {
            printf("stack is empty");
        }
        else{
            for(i=front;i<=rear;i++)
            {
                printf("\n%d",stack[i]);
            }
        }
    }
    int main()
    {
        int rear=-1;
        int front=-1;
        int ele;
        while(1)

    {
     printf("\nstack operations");
     printf("\n1.enqueue \n2.dequeue \n3.display");


     printf("\nenter the choice:");
     scanf("%d",&choice);

     switch(choice)
     {
        case 1:
        enqueue(ele);
        break;
        case 2:
        dequeue(ele);
        break;
        case 3:
        display(ele);
        break;

        default:
        printf("nothing");
     }
    }

    return 0;
    }
