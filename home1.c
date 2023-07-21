#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;/* data */
} *head,*temp,*newnode , *tail;

void main(){
    for(;;){
        printf("\n1.CREATE\n2.DISPLAY\n3.INSERT_BEGENNING\n4.INSERT_END\n");
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
            case 3:
            insert_beg();
            break;
            case 4:
            insert_end();
            break;
        }
    }
}

void create(){
    //display();
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("ENTER THE DATA:");
    scanf("%d",&newnode->data);
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
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
}
void insert_beg(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("ENTER THE DATA:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void insert_end(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("ENTER THE DATA:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
            temp=head;
    while(temp->next!=NULL){
       temp=temp->next;
       temp->next=newnode;
       newnode->next=temp;
    }
    printf("%d",temp);
}
}
