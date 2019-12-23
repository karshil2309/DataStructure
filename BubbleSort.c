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
	bubble(arr);
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
