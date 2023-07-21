#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
}*head,*temp,*newnode,*tail,*prev;

void main(){
    for(;;){
    printf("\n1.CREATE\n2.DISPLAY\n3.DElETEMID\n");
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
        case 3:
        delmid();
        break;
    }
}
}
void create(){
    //printf("ENTER THE SIZE:");
    //int size;
    //scanf("%d",&size);
   // for(int i=0;i<size;i++){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("ENTER THE DATA:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
}

void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    //printf("%d  ",temp);
}

void delmid(){
printf("\nENTER THE POSISTION:");
int position;
scanf("%d",&position);
temp=head;
for(int i=1;i<position;i++){
    prev=temp;
    temp=temp->next;
    //tail->next=temp->next;
    //temp->next->next=tail;
//free(temp)
}
prev->next=temp->next;
free(temp);
display();
}
