/*
			Date:-   19-12-2017
			Author:- Karshil sheth
			Aim:-    DATA STRUCTURES


*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<graphics.h>
#define  SIZE 10
#define  PUSH 1
#define  POP 2
#define PEEP 3
#define DISPLAY 4
#define N 6

int queue[N]={0};
int rear=0,front=0;

void insert(void);
void delet(void);
void displa(void);
void create(void);

void push();
void pop();
void peep();
void display();
void peep1();
void pushs();
void pops();
void peeps();
void peeps1();
void displays();
void simple();
char stacks[SIZE];
int stack[SIZE];
int top=-1;
void main(){
		int choices,ch,ch1,ch5;
		textcolor(CYAN);
		textbackground(RED);
		clrscr();
		printf("\t*************************************************\n");
		printf("\n\t\t\tDATA STRUCTURES\n\n");
		printf("\t*************************************************\n");
		printf("\n1)Implementation of STACK......");
		printf("\n2)Implementation of QUEUE......");
		printf("\n3)**EXIT FROM THIS**");
		printf("\nSelect Your choices from above :-");
		scanf("%d",&ch);
		switch(ch){  //switch1  opens
				 case 1://Stack Opens----------------------->>

					printf("\n1---->STATIC");
					printf("\n2---->DYNAMIC");

					printf("\nSelect your option::");
					scanf("%d",&ch1);
					switch(ch1){ //switch2 opens
							 case 1:
								printf("\n1select for Numbers");
								printf("\n2select for Characters");
								printf("\n select your choices");
								scanf("%d",&choices);
								switch(choices){//switch3 opens
											case 1:

												while(1){//while1 for static numbers

													int choice;
													printf("\n1*******push");
													printf("\n2*******pop");
													printf("\n3*******peep");
													printf("\n4*******display");
													printf("\n5*******peep1");
													printf("\n6********Exit");
													printf("\nEnter the choice");
													scanf("%d",&choice);
													switch(choice){//switch4 opens

																case PUSH:push();
																	  break;

																case POP:pop();
																	 break;

																case PEEP:peep();
																	  break;

																case DISPLAY:display();
																	  break;
																case 5:	  peep1();
																	  break;

																case 6: exit(0);
																default:printf("Invalid choice");

														       }//end of switch4

													}//end of while1

											break;

											case 2:

											while(1){// while2 for static Characters.
													int choices1;
													printf("\n1*******pushs");
													printf("\n2*******pops");
													printf("d\n3*******peeps");
													printf("\n4*******peeps1");
													printf("\n5*******displays");
													printf("\n6********Exit");
													printf("\nEnter the choice");
													scanf("%d",&choices1);
													switch(choices1){//switch 5 for characters starts

																case 1:pushs();
																	break;

																case 2:pops();
																	break;

																case 3:peeps();
																	break;

																case 4:peeps1();
																	break;

																case 5:displays();
																	break;

																case 6: exit(0);
																default:printf("Invalid choice");

															}//end of switch5                         						}//end of while
												  }//while2 ends
											break;
									       }//switch3 closes
							 break;
						   }//switch2 closes/end
				 break;

				 case 2://QUEUE opens

					while(1){ //while3 starts

					printf("\n1)For SIMPLE QUEUE");
					printf("\n2)For CIRCULAR QUEUE");
					printf("\n3)^^EXIT^^");
					printf("\n3)Enter your option");
					scanf("%d",&ch5);
					switch(ch5){//switch6 for que starts

							case 1:  simple();
								break;
						    //	case 2:
							      //	circular();
							       //	break;
							case 3:
								exit(0);

						}//switch6 ends for que

					}//while3 ends
				 break;

				 case 3:
					exit(0);

			  }//end of switch1

}//end of void main

//number starts---------------------------------------------------------------------
void push(){
		int num;
		if(top==SIZE-1){
				printf("Stack Overflow");
			      }	else{

			printf("\n enter the value to be pushed");
			scanf("%d",&num);
			top++;
			stack[top]=num;
		    }
} //end of push
void pop(){

    if(top==-1){
		printf("\nstack underflows");
		return;

    }
    else{
		printf("\n the %d value is deleted",stack[top]);
		top--;
    }

}//end of pop
void display(){

	int i;
	for(i=top;i>=0;i--){
			   printf("\n the enterd values are %d",stack[i]);
	}

}//end of diplay
void peep(){
	int i;
	printf("\nEnter the index to be searched");
	scanf("%d",&i);
	if(i<=top){
			printf("\n%d",stack[i]);

	}
	else
			printf("\n the index is not in range");
}//end of peep
void peep1(){
	int n,i;
	printf("\n Enter the number in stack and find out its postion");
	scanf("%d",&n);
	for(i=0;i<=top;i++){
		if(n==stack[i])
		{
		printf("\nthe index of searched number is %d\n",i);
		}
	}
}//end of peep1
//number ends------------------------------------------------------------------------------------------------------------------------------

//character starts-----------------------------------------------------------------------
void pushs(){
	       //	int top;
		char c;
//		fflush;
		if(top==SIZE-1){
				printf("Stack Overflow");
				return;
		}
		else{

			printf("\n enter the character to be pushed");
			scanf("%s",&c);
			top++;
			stack[top]=c;

		}


} //end of push
void pops(){

    if(top==-1){
		printf("\nstack underflows");
		return;

    }
    else{
		printf("\n the %c character is deleted",stack[top]);
		top--;
    }

}//end of pops
void peeps(){
	int i;
	printf("\nEnter the index to be searched");
	scanf("%d",&i);
	if(i<=top){
			printf("\n%c",stack[i]);

	}
	else
			printf("\n the index is not in range");
}//end of peeps
void peeps1(){
	int i;
	char n;
	printf("\n Enter the character in stack and find out its postion");
	scanf("%c",&n);
	for(i=0;i<=top;i++){
		if(n==stack[i])
		{
		printf("\nthe index of searched character is %d\n",i);
		}
	}
}//end of peeps1
void displays(){

	int i;
	for(i=top;i>=0;i--){
			   printf("\n %c",stack[i]);
			   }

}//end of diplays
//end of characters
/* simple Que begins*/
void simple()
{
    int ch4;
    while(1)
    {


	printf("\n 1.Insert");
	printf("\n 2.Delete");
	printf("\n 3.Display");
	printf("\n 4.Exit");
	printf("\n Enter Your Choice : \n");
	scanf("\n %d",&ch4);
	switch(ch4)
	{
	    case 1:
		insert();
		break;
	    case 2:
		delet();
		break;
	    case 3:
		displa();
		break;

	    case 4:
		exit(0);
		default:printf("\nINvalid choice***");

		}
    }
}
void insert(void) //Insert Function
{
    int t;
    if(rear<N)
    {
	printf("\n\t Enter Element in a Queue : ");
	scanf("%d",&t);
	queue[rear]=t;
	rear++;
    }
    else
    {
	printf("\n\t Queue is Overflow");
    }
}
void delet(void) //Delete Function
{
    int i;
    printf("\n\t %d gets deleted.........",queue[front]);
    queue[front]=0;
    front++;
}
void displa(void) //Display Function
{
    int i;
    for(i=front;i<rear;i++)
    {
	printf("\n\t %d",queue[i]);
    }
}
void create(void) //Create Fucntion
{
    int t;
    printf("\n\t Enter Element in a Queue : ");
    scanf("%d",&t);
    front=0;
    queue[front]=t;
    rear=front+1;
}


