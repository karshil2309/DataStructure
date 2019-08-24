/*
	Author:- Karshilsheth
	Program:- Program to Implement Bubble Sort in C.
*/
#include<stdio.h>
#include<conio.h>
void inputb(int []);
void displayb(int []);
void bubble(int []);
void main()
{
	int choice,arr[5]={0};
	clrscr();
	printf("\n1Enter 1 for Bubble Sort");
	printf("\n2Enter 2 for Insertion sort");
	printf("\n3Enter 3 for quick sort");
	printf("\n4Enter 4 for Merge sort");
	printf("\n5Enter 5 for Exit");
	printf("\nEnter the option");
	scanf("%d",&choice);
	switch(choice)
	{

		case 1:
		       bubble(arr);
		       break;


	}

}
void inputb(int arrt[5])
{
	int i;
	for(i=0;i<5;i++)
	{
	       printf("\nenter the array ");
	       scanf("%d",&arrt[i]);
	}
      //	printf("\n");

}
void bubble(int arrt[5])
{
       int i,j,temp,arr[5]={0};

       inputb(arr);
       displayb(arr);
       for(i=0;i<5;i++)
       {
		printf("\nPass: %d",i+1);
		for(j=0;j<4-i;j++)
		{
			if(arrt[j]>arrt[j+1])
			{
				temp=arrt[j];
				arrt[j]=arrt[j+1];
				arrt[j+1]=temp;
			}
			displayb(arr);

		}
		printf("\n");
		getch();
       }
       printf("\nAfter sorting\n");
       displayb(arr);

}
void displayb(int arrt[5])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\t %d",arrt[i]);

	}
	printf("\n");


}
