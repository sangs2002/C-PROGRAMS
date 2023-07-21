#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
} *head,*temp,*tail,*newnode;

int main(){
    for(;;){
        printf("\nENTER THE SWITCH CASE:");
    int n;
    scanf("%d",&n);
    switch(n){
        case 1:
        create();
        break;
        case 2:
        display();
        break;
        case 3:
            count();
            break;

    }
}
}
void create(){
newnode =  (struct node*)malloc(sizeof(struct node));
scanf("%d",&newnode->data);
newnode->next=NULL;
if(head == NULL){
    head = newnode;
    temp = newnode;
}
else{
    temp->next= newnode;
    temp = newnode;
    tail= newnode;

}

}
void display(){
    int count=0;
    temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        //count++;
        temp=temp->next;
    }
    //printf("%d",count);
}
void count(){
    int count=0;
    temp = head;
    while(temp!=NULL){

        count++;
        temp=temp->next;
    }
    printf("%d",count);
}
