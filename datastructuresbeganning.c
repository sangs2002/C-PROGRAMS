#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node*next;
}*head,*temp,*tail,*newnode,*nextnode,*prev;

void main(){
    for(;;){
    printf("\n1.CREATE \n2.DISPLAY \n3.INSERT AT BEGANINNG \n4.INSERT AT LAST");
    printf("\nENTER THE OPTION:");
    int option;
    scanf("%d",&option);

    switch (option){

        case 1:
        create();
        break;
        case 2:
        display();
        break;
        case 3:
        insert_at_beganinng();
        break;
        case 4:
        insert_at_last();
         break;
        //default:
        //break;
    }
    }}

    void create(){
        printf("ENTER THE SIZE:");
        int size;
        scanf("%d",&size);
        for(int i=0;i<size;i++){
        printf("ENTER THE VALUE:\n");
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            //newnode->next=temp;
            temp=newnode;
        }
    }
    }
    void display(){
        printf("DISPLAY THE VALUES\n");
        temp=head;
        while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
        }
        //printf("%d",temp->data);
    }

    void insert_at_beganinng(){
        int data_value;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("ENTER THE DATA VALUE:");
        scanf("%d",&data_value);
        //newnode->next=NULL;

        if(head==NULL){
            printf("NO VALUE WILL BE INSERTED");
        }
        else{

            newnode->data=data_value;
            newnode->next=head;
            head=newnode;
        }

    }
        void insert_at_last(){
             int value;
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("ENTER THE VALUE:");
            scanf("%d",&value);
            if(head==NULL){
                printf("NO VALUES CAN BE PRINTED");
            }
            else
            {
                newnode->data=value;
                temp=head;
                while(temp->next!=NULL){
                    temp=temp->next;
                }
                temp->next=newnode;
                newnode->next=NULL;
                newnode=temp;
            }

        }









