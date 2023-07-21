#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node * prev;
    int data;
    struct node * next;
}*head,*temp,*newnode,*tail;

void main(){
    for(;;){
        printf("\n1.CREATE\n2.DISPLAY\n");
        printf("ENTER THE CHOICE:");
        int option;
        scanf("%d",&option);

        switch(option){
            case 1:
            create();
            break;
            case 2:
            display();
        }
    }

}

void create(){
    printf("ENTER THE CREATION:");
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL){
        temp=newnode;
        head=newnode;
        tail=newnode;
    }
    else{
        //temp->prev=head;
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
        tail=newnode;
        //newnode->prev=
    }
    }

    void display(){
        temp=tail;
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->prev;
        }
    }
