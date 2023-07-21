#include<stdio.h>
#include<stdlib.h>
 struct node{
     int data;
     struct node*next;
 }*head,*newnode,*temp;
 int main(){
     printf("Enter the ecount to add:");
     int c;
     scanf("%d",&c);
     for(int i=0;i<c;i++){
         newnode=(struct node*)malloc(sizeof(struct node));
         scanf("%d",&newnode->data);

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

     temp=head;
     int count=1;

     int a=temp->data;
         if(a%2==0){
             printf("\n%d\n",a);
             count++;
             int remain=c-count;
             printf("the count that removes id:%d",remain);

     }

 }
