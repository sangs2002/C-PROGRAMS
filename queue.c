#include<stdio.h>
#include<stdlib.h>
#define max 5

int temp;
int front=-1;
int rear =-1;
int queue[max];

void enqueue();
void dequeue();
void display();


void main(){
    for(;;){
        printf("\n1.ENQUEUE \n2.DEQUEUE \n3.DISPLAY");
        printf("\nENTER THE OPTION:");
        int option;
        scanf("%d",&option);

        switch(option){
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
        }
    }
}

void enqueue(){
    for(int i=0;i<max;i++){
      printf("ENTER THE ELEMENT:");
      int element;
      scanf("%d",&element);

      if(rear==max-1){
        printf("QUEUE IS FULL");
      }
      else{
        rear++;
        front=0;
        queue[rear]=element;
      }
}
}
void dequeue(){

    int element;
    if(front==-1 && rear==-1 || rear<front){
        printf("QUEUE IS EMPTY\n");

    }
    else{
        element=queue[front];
        printf("%d",element);
        front++;
        if(front==rear+1){
            front=-1;
            rear=-1;
        }
    }

}

void display(){
    temp=front;
    if(rear<front){
        printf("QUEUE IS EMPTY");
    }
    else
    {
        while(front!=rear+1){
            printf("%d",queue[front]);
            front++;
        }
    }front=temp;
}
