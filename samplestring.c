#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node*next;
}*head,*tail,*nextnode,*newnode,*temp;

void main(){
    for(;;){

    printf("ENTER THE OPTION:");
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
    printf("ENTER THE DATA:");
    newnode=((struct node*)malloc(sizeof(struct node)));
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    if(head==NULL){
        head=newnode;
        temp=newnode;
    }
    else{
        newnode->next=temp;
        newnode->next=head;
        temp=newnode;
        tail=newnode;
    }

}

void display(){
    temp=head;
    while(temp!=tail){
       printf("%d",temp->data);
       temp=temp->next; 
    }
}