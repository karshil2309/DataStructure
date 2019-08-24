#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
   int data;
   struct Node *next;
}*head = NULL;

void push(int);
void pop();
void display();
void peep();

void main()
{
   int choice, value;
   clrscr();
   printf("\n***** Stack using Linked List *****\n");
   while(1)
	{
		 printf("\n------ MENU ------\n");
		 printf("1. Push\n");
		 printf("2. Pop\n");
		 printf("3. Display\n");
		 printf("4. Peep\n");
		 printf("5. Exit\n");
		 printf("Enter your choice: ");
		 scanf("%d",&choice);

		 switch(choice){
				 case 1: printf("Enter the value to be insert: ");
				 scanf("%d", &value);
				 push(value);
				 break;

				 case 2: pop();
				break;

				 case 3: display();
				 break;

				 case 4: peep();
				 break;
				 case 5: exit(0);
				 default: printf("\nWrong input by user !!!!\n");

				}
	}
}
void push(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   if(head == NULL)
      newNode->next = NULL;
   else
      newNode->next = head;
   head = newNode;
   printf("\nInsert is Successfull...\n");
}
void pop()
{
   if(head == NULL)
      printf("\nStack is Empty....\n");
   else{
      struct Node *temp = head;
      printf("\nDeleted element is  %d", temp->data);
      head = temp->next;
      free(temp);
   }
}
void display()
{
   if(head == NULL)
      printf("\nStack is Empty....\n");
   else{
      struct Node *temp = head;
      while(temp->next != NULL){
	 printf("%d--->",temp->data);
	 temp = temp -> next;
      }
      printf("%d--->NULL",temp->data);
   }
}

void peep()
{
	int i,top,n;
	top=head;
	printf("\nEnter the index to be searched");
	scanf("%d",&n);
	if(head==-1)
	{
		printf("index is not in range");
	}
	else
	printf("\n %d\n",d);

}