#include<stdio.h>
#include<stdlib.h>
#define max 5

int queue[max];
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
            front=0;
            rear++;
            queue[rear]=ele;
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
            value=queue[front];
            printf("\n enter the element is dequeued");
            printf("%d",queue[front]);
            front++;
        }
    }
    void display(int ele)
    {
        if(front==-1||front==rear+1)
        {
            printf("queue is empty");
        }
        else{
            for(i=front;i<=rear;i++)
            {
                printf("\n%d",queue[i]);
            }
        }
    }
    int main()
    {
        int rear=-1;
        int front=-1;
        int ele;
        for(;;)

    {

     while(1)
     {
     printf("\nqueue operations");
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
    }
    return 0;
    }
