#include <stdio.h>
#include <stdlib.h>
//#define size 20;
struct node {
    char arr[100];
    struct node * next;
}*temp,*head,*newnode;

void main(){
    for(;;){
    printf("1.CREATE \n2.DISPLAY \n3.REVERSE");
    printf("\nENTER THE OPTION:");
    int option;
    scanf("%d",&option);

    switch(option){
        case 1:
        create();
        break;
        case 2:
        display();
        break;
        //case 3:
        //reverse();
        //break;
    }
}
}
void create(){
    printf("ENTER THE SIZE:");
    int size;
    scanf("%d",&size);
    //char arr[size];
    for(int i=0;i<size;i++){
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->arr[100]);
    newnode->next=NULL;

    if(head==NULL){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }

}
}
void display(){
    if(head==NULL){
        printf("PRINT NOTHING");
    }
    else{
        temp=head;
        while(temp!=NULL){
                printf("%d",&temp->arr[100]);
            temp=temp->next;
        }
        printf(temp);
    }
}
