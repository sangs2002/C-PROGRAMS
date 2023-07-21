#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node * next;/* data */
} *head,*temp,*newnode , *tail;

void main(){
    for(;;){
        printf("ENTER THE OPTION:");
        printf("\n1.CREATE\n2.DISPLAY\n");
        int option;
        scanf("%d",&option);

        switch(option){
            case 1:
            create();
            break;
            case 2:
            display();
            break;
        }
    }
}

void create(){
    display();
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("ENTER THE DATA:");
    printf("%d",newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        temp=newnode;
    }
    else{
    temp->next=newnode;
    temp=newnode;
}}
void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}