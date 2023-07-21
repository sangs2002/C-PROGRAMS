#include<stdio.h>
#include<stdlib.h>

struct node {

int data;
struct node * next;
struct node * nextnode;
};

struct node * head = NULL;
struct node * temp;

int main(){
printf("\n ENTER THE SIZE OF NODE:");
int size;
scanf("%d",&size);

 for( int i =1 ; i<=size ; i++){
    struct node * newnode;
     newnode = (struct node*)malloc(sizeof(struct node));
     scanf("%d",&n)
    printf("\nENTER THE NUMBER:");
    int num;
    scanf("%d",&num);

    if(head == NULL){
    newnode -> data = num;
    head = newnode;
}
else
{
    temp = head->nextnode;
    newnode -> data = num;
    head = newnode;
    newnode -> next = temp;
}
}
display();
}
void display()
{

        struct node * temp;
        if(head==NULL)
        {
                printf("\nLIST IS EMPTY:n");
                return;
        }
        else
        {
            temp = head;
            printf("\nTHE LIST ELEMENTS:");
            while(temp!=NULL){
                printf("%d->",temp->data);
                temp = temp -> next;

            }

        }
}

