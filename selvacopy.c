#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*temp,*newnode;
int main()
{
    int n,flag=0;
    int count=0;
    int size,i;
    printf("ENTER THE SWITCH CASE:\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("ENTER THE SIZE:\n");
    scanf("%d",&size);
    printf("ENTER THE FOUND OR NOT FOUND VALUE:");
        int value;
        scanf("%d",&value);

    for(i=0;i<size;i++)
    {
        printf("ENTER THE NODE VALUE:");
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
        temp=head;
        while(temp!=NULL)
        {
            printf("%d",temp->data);

            count++;
            if(count<size){
                printf("->");
            }
            if(value==temp->data){
                flag=0;
                break;
            }
            else if(value!=temp->data){
                    flag = 1;
                    //break;
            }
            temp = temp -> next;
        }
        if(flag==0){
            printf("FOUND");

        }
        else{
            printf("NOT FOUND");
        }

        printf("\n Insert value of count number:%d",count);

          break;

        case 2:
            printf("\ninsert at front:\n");
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        temp=head;
        newnode->next=temp;
        head=newnode;
        temp=head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        case 3:
         printf("\ninsert at end:\n");
         newnode=(struct node*)malloc(sizeof(struct node));
         scanf("%d",&newnode->data);
         newnode->next=NULL;
         temp=head;
         while(temp!=NULL)
        {
            printf("%d ",temp->data);
            if(temp->next==NULL)
            {
                temp->next=newnode;
                temp=temp->next;
                printf("%d",temp->data);
                break;
            }
            else
            {
                temp=temp->next;
            }
        }
        case 4:
            printf("\n middle:\n");
            int p;
            scanf("%d",&p);
         newnode=(struct node*)malloc(sizeof(struct node));
         scanf("%d",&newnode->data);
         newnode->next=NULL;
         temp=head;
         for(i=1;i<p-1;i++)
         {
             temp=temp->next;
         }
         newnode->next=temp->next;
         temp->next=newnode;
         temp=head;
         while(temp!=head)
         {
             printf("%d",temp->data);
             temp=temp->next;
         }
    }
}
