#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node*next;
}*head,*temp,*tail,*newnode,*nextnode;

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
        //case 3:
        //insert_at_beganinng();
       // case 4:
       // insert_at_last();
       // break;
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
