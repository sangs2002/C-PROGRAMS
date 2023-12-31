#include<stdio.h>
#include<conio.h>

struct Node
{
   int data;
   struct Node *next;
}*front = NULL,*rear = NULL;

void enqueue(int);
void dequeue();
void display();

void enqueue(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   newNode -> next = NULL;
   if(front == NULL)
      front = rear = newNode;
   else{
      rear -> next = newNode;
      rear = newNode;
   }
}
void dequeue()
{
   if(front == NULL)
      printf("\nQueue is Empty\n");
   else{
      struct Node *temp = front;
      front = front -> next;
      printf("\nDeleted element: %d\n", temp->data);
      free(temp);
   }
}
void display()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = front;
      while(temp->next != NULL){
	 printf("%d-->",temp->data);
	 temp = temp -> next;
      }
      printf("%d-->NULL\n",temp->data);
   }
}
int main()
{
   int choice, value;
   printf("\nQueue using Linked List");
   while(1){
      printf("\n1.enqueue\n2.dequeue\n3.Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d", &value);
		 enqueue(value);
		 break;
	 case 2: dequeue();
	 break;
	 case 3: display();
	 break;
	 case 4:
	     exit(0);
	 default:
	     printf("\ninvalid");
      }
   }
   return 0;
}
