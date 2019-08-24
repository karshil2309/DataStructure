/*
Write a program to implement the single queue using array
*/
#include<stdio.h>
#include<conio.h> 

int queue[5];
int rear = -1;
int front = -1;

void insertElement();
void deleteElement();
void display();

void main()
{
	int choice;
	choice = 0;
	clrscr();

	do
	{
		printf("\n 1. Insert element to queue");
		printf("\n 2. Delete element from queue");
		printf("\n 3. Display all elements of queue");
		printf("\n 4. To exit from the program");
		printf("\n Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insertElement();
			break;

			case 2:
				deleteElement();
			break;

			case 3:
				display();
			break;

			case 4:
				printf("\n Exit from the program");
				getch();
				exit(0);
			break;

			default:
				printf("Wrong choice \n");
		}
		getch();
		clrscr();
	}while(choice!=4);
}

void insertElement()
{
	int item;
	if (rear == 4)
	{
		printf("\n Queue Overflow");
	}
	else
	{
		if (front == - 1)
		{
			front = 0;
		}
		printf("\n Insert the element in queue : ");
		scanf("%d",&item);
		rear = rear + 1;
		queue[rear] = item;
	}
}

void deleteElement()
{
	if (front == - 1 || front > rear)
	{
		printf("\n Queue Underflow");
		//return ;
	}
	else
	{
		printf("\n Element deleted from queue is : %d", queue[front]);
		front = front + 1;
	}
}

void display()
{
	int i;
	if (front == - 1)
	{
		printf("\n Queue is empty");
	}
	else
	{
        printf("Queue is : \n");
		for (i = front; i <= rear; i++)
		{
			printf("| %d ", queue[i]);
		}
		printf("| ");
		printf("\n");
    }
}