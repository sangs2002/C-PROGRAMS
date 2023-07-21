#include<stdio.h>
#include<stdlib.h>
#define max 5

int top=-1;
int stack[max];
void pop();
void display();
void push();

void main(){
    for(;;){
    printf("\n1.PUSH \n2.POP \n3.DISPLAY");
    printf("\nENTER THE OPTION:");
    int option;
    scanf("%d",&option);

   switch(option){
    case 1:
    push();
    break;
    case 2:
    pop();
    break;
    case 3:
    display();
    break;
   }
}
}
void push(){
    for(int i=0;i<max;i++){
    printf("\nENTER THE ELEMENT:");
    int element;
    scanf("%d",&element);

    if(top==max-1){
        printf("STACK IS OVERFLOW");
    }
    else{
        top++;
        stack[top]=element;
    }
    }
}
void pop(){
    int element;
    if(top==-1){
        printf("STACK IS EMPTY");
    }
    else{
        element=stack[top];
        printf("\nENTER THE DELETING ELEMENT: %d",element);
           top--;
    }
}

void display(){
    if(top==-1){
        printf("STACK IS EMPTY");
    }
    else{
            //printf();
        while(top!=-1){
            printf("%d",stack[top]);
            top--;
        }
    }
}

