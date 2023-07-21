#include<stdio.h>
#include<stdlib.h>


struct node{

    int data;
    struct node*next;
    }*head,*temp,*newnode,*nextnode,*next;


    void main(){
for(;;){
    printf("ENTER THE OPTION:");
    int option;
    scanf("%d",option);

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
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){

            newnode=(struct node*)malloc(sizeof(struct node));
            scanf("%d",newnode->data);
            newnode->next=NULL;

            if(temp=head){
                temp=newnode;
                head=newnode;
            }
            else{
                temp->next=newnode;
                temp=newnode;
            }

        }
    //}
    void display(){

    temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
   // printf("%d",temp);    }


