#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*next;
}*head,*tail,*nextnode,*newnode,*temp;

void main(){
    for(;;){

    printf("\nENTER THE OPTION:\n");
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
    printf("ENTER THE DATA:\n");
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    if(head==NULL){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        newnode->next=head;
        temp=newnode;
        //tail=newnode;
    }

}

void display(){
    temp=head;
    while(temp->next!=head){
       printf("%d\n",temp->data);
       temp=temp->next;
    }
    printf(temp);
}
