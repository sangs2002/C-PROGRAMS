#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
struct Node* top = NULL;

void push(struct node=,int ele) {
    struct Node * temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data=ele;
    temp->next=top;
    temp=top;
    return top;
};
void view_stack(struct node *);
struct node * push(struct node * top,int data)
{
    struct node * temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=top;
    top=temp;
    printf("%d is pushed\n",top->data);
    view_stack(top);
    return top;
}
struct node * pop(struct node * top)
{
    struct node * temp;
    temp=top;
    if(top==NULL)
    {
        printf("stack empty! nothing to pop\n");
        return;
    }
    top=top->link;
    printf("%d is popped\n",temp->data);
    free(temp);

}
void peak(struct node * top)
{
    if(top==NULL)
    {
        printf("stack empty\n");
    }
    else{
        printf("top item=%d",top->data);
    }
}
void view_stack(struct node * top)
{
    struct node* temp=top;
    printf("your current stack:\n");
    printf("   \n");
    while(temp!=NULL)
    {
        printf("-------\n| %d |\n-------\n",temp->data);
        temp=temp->link;
    }
    }
    int main()

{
    
}


