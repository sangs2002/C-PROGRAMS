#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *ptr;
};
struct node *head,*temp;

int main()
{   
    int ele,a,b,i,c,k,l;
    head=NULL;
     for(;;)
    {
    printf("\n1.Insert at front");
    printf("\n2.Insert at end");
    printf("\n3.Insert after value");
    printf("\n4.Display..");
    printf("\nEnter your choice:");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        {
               // printf("\nInsert at front section");
                struct node *a;
                printf("\nEnter element:");
                scanf("%d",&ele);
                a=(struct node*)malloc(sizeof(struct node));
                a->data=ele;
                a->ptr=NULL;
                a->ptr=head;
                head=a;
        }break;
        case 2:
        {
            if(head==NULL)
            {
                printf("\nEnter element:");
                scanf("%d",&ele);
                struct node *a;
                a=(struct node*)malloc(sizeof(struct node));
                a->data=ele;
                a->ptr=NULL;
                head=a;
            }
            else
            {
                printf("\nEnter element:");
                scanf("%d",&ele);
                struct node *a;
                a=(struct node*)malloc(sizeof(struct node));
                a->data=ele;
                a->ptr=NULL;
                temp=head;
                while(temp->ptr!=NULL)
                {
                    temp=temp->ptr;
                }
                temp->ptr=a;
            }
        }break;
        case 3:
        {
            if(head==NULL)
            {
                printf("\nEmpty...");
            }
            else
            {
                printf("\nEnter the data value to inserAt after that....");
                scanf("%d",&k);
                temp=head;
                while(temp->data!=k)
                {
                    temp=temp->ptr;
                }
                struct node *a;
                a=(struct node*)malloc(sizeof(struct node));
                printf("\nEnter element:");
                scanf("%d",&l);
                a->data=l;
                a->ptr=NULL;
                a->ptr=temp->ptr;
                temp->ptr=a;
            }
        }break;
        case 4:
        {   
            if(head==NULL)
            {
                printf("\nNothing to show here...");
            }
            else
            {
            temp=head;
            while(temp!=NULL)
            {
                printf("\nThe elements of Singly linked list is:%d",temp->data);
                temp=temp->ptr;
            }}
        }break;
    }}
    //printf("%d",*head);
    return 0;
}