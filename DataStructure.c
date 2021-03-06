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
char stacks[SIZE];
int stack[SIZE];
int top=-1;
/*
	Declaration of Stack and its header files...............
*/

#define N 6
#define max 10
int ccq[10],ccfront=0,ccrear=-1;

int q[10],fronts=0,rears=-1;
int queue[N]={0};
int rear=0,front=0;
int cqueue[N]={0};
int crear=0,cfront=0;

void cinsert(void);
void cdelet(void);
void cdisplay(void);
void ccreate(void);

void insert();
void delet();
void displa();
void simple();
void simplec();
void circular();
void ccircular();
/*
	Declaration of Queue and its header files.................
*/
//--------------------Main  Program Starts-------------------------
void main(){
		int choices,ch,ch1,ch5;
		textcolor(RED);
		textbackground(GREEN);
		clrscr();
		start:
		printf("\t*************************************************\n");
		printf("\n\t\t\tDATA STRUCTURES PROGRAMS\n\n");
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
					printf("\n3---->EXIT");
					printf("\nSelect your option::");
					scanf("%d",&ch1);
					switch(ch1){ //switch2 opens
							 case 3:
								exit(0);


							 case 1:
								printf("\n1select for Numbers");
								printf("\n2select for Characters");
								printf("\n select your choices");
								scanf("%d",&choices);
								switch(choices){//switch3 opens
											case 1://for numbers

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

											break;  //end of numbers

											case 2://characters begin

											while(1){// while2 for static Characters.
													int choices1;
													printf("\n1*******pushs");
													printf("\n2*******pops");
													printf("d\n3*******peeps");
													printf("\n4*******peeps1");
													printf("\n5*******displays");
													printf("\n6********Exit");
													printf("\n7to main menu");
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

																case 7:
																	goto label;

															}//end of switch5                         						}//end of while
												  }//while2 ends
											break; //character ends
									       }//switch3 closes
							 break;
						   }//switch2 closes/end
				 break;

				 case 2://QUEUE opens

					while(1){ //while3 starts

					printf("\n1)For SIMPLE NUMBER QUEUE");
					printf("\n2)For CIRCULAR NUMBER QUEUE");
					printf("\n3)For SIMPLE CHARACTER QUEUE");
					printf("\n4)For CIRCULAR CHARACTER QUEUE");
					printf("\n5)^^EXIT^^");
					printf("\n6 for main menu");
					printf("\nEnter your option");
					scanf("%d",&ch5);
					switch(ch5){//switch6 for que starts

							case 1:  simple();
								break;
							case 2:
								circular();
								break;
							case 3:
								simplec();
								break;
							case 4:
								ccircular();
								break;
							case 5:
								exit(0);
								default:printf("\nInvalid Choice");
							case 6:
								goto:start;
						}//switch6 ends for que

					}//while3 ends
				 break;

				 case 3:
					exit(0);
				 default:printf("\nINVALID CHoicES");
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
void insert() //Insert Function
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
void delet() //Delete Function
{
    int i;
    printf("\n\t %d gets deleted.........",queue[front]);
    queue[front]=0;
    front++;
}
void displa() //Display Function
{
    int i;
    for(i=front;i<rear;i++)
    {
	printf(" %d-->\t",queue[i]);
    }
}
//Simple Queue ends
/*  	CIRCULAR QUEUE STARTS   */
void circular()
{
    int ch7;
    void inser();
    void del();
    void disp();
    clrscr();
    printf("\nCircular Queue Operations\n");
    printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    while(1)
    {
	printf("Enter Your Choice:");
	scanf("%d",&ch7);
	switch(ch7)
	{
	case 1: inser();
		break;
	case 2: del();
	    break;
	case 3:disp();
	    break;
	case 4: exit(0);
	default:printf("Invalid option\n");
	}
    }
}
void inser()
{
    int x;
    if((fronts==0&&rears==max-1)||(fronts>0&&rears==fronts-1))
	printf("Queue is Overflow\n");
    else
    {
	printf("Insert Element :");
	scanf("%d",&x);
	if(rears==max-1&&fronts>0)
	{
	    rears=0;
	    q[rears]=x;
	}
	else
	{
	    if((fronts==0 && rears==-1)||(rears!=fronts-1))
		q[++rears]=x;
	}
    }
}
void  del()
{
    int a;
    if((fronts==0)&&(rears==-1))
    {
    printf("Queue is Underflow\n");
    exit(0);
    }
    if(fronts==rears)
    {
	a=q[fronts];
	rears=-1;
	fronts=0;
    }
    else
	if(fronts==max-1)
	{
	    a=q[fronts];
	    fronts=0;
	}
	else a=q[fronts++];
	printf("Deleted Element is : %d\n",a);
}
void disp()
{
    int i,j;
    if(fronts==0&&rears==-1)
    {
	printf("Queue is Underflow\n");
	exit(0);
    }
    if(fronts>rears)
    {
	for(i=0;i<=rears;i++)
	    printf("\t%d",q[i]);
	for(j=fronts;j<=max-1;j++)
	    printf("\n \t%d",q[j]);
     //	printf("\nRear is at %d\n",q[rears]);
      //	printf("\nFront is at %d\n",q[fronts]);
    }
    else
    {
	for(i=fronts;i<=rears;i++)
	{
	    printf("\t%d",q[i]);
	}
      //	printf("\nRear is at %d\n",q[rears]);
      //	printf("\nFront is at %d\n",q[fronts]);
    }
    printf("\n");
}
//circular ends
//Character of Simple Starts
void simplec()
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
		cinsert();
		break;
	    case 2:
		cdelet();
		break;
	    case 3:
		cdisplay();
		break;

	    case 4:
		exit(0);
		default:printf("\nINvalid choice***");

		}
    }
}
void cinsert(void) //Insert Function
{
    char t;
    if(crear<N)
    {
	printf("\n\t Enter Element in a Queue : ");
	scanf("%s",&t);
	cqueue[crear]=t;
	crear++;
    }
    else
    {
	printf("\n\t Queue is Overflow");
    }
}
void cdelet(void) //Delete Function
{
    char i;
    printf("\n\t %c gets deleted.........",cqueue[cfront]);
    cqueue[cfront]=0;
    cfront++;
}
void cdisplay(void) //Display Function
{
    char i;
    for(i=cfront;i<crear;i++)
    {
	printf("\n\t %c",cqueue[i]);
    }
}
//simple character ends
/*circular character starts */
void ccircular()
{
    int ch7;
    void cinser();
    void cdel();
    void cdisp();
    clrscr();
    printf("\nCircular Queue Operations\n");

    printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    while(1)
    {
	printf("Enter Your Choice:");
	scanf("%d",&ch7);
	switch(ch7)
	{
	case 1: cinser();
		break;
	case 2: cdel();
	    break;
	case 3:cdisp();
	    break;
	case 4: exit(0);
	default:printf("Invalid option\n");
	}
    }
}
void cinser()
{
    char x;
    if((ccfront==0&&ccrear==max-1)||(ccfront>0&&ccrear==ccfront-1))
	printf("Queue is Overflow\n");
    else
    {
	printf("Insert Element :");
	scanf("%s",&x);
	if(ccrear==max-1&&ccfront>0)
	{
	    ccrear=0;
	    ccq[ccrear]=x;
	}
	else
	{
	    if((ccfront==0&&ccrear==-1)||(ccrear!=ccfront-1))
		ccq[++ccrear]=x;
	}
    }
}
void  cdel()
{
    int a;
    if((ccfront==0)&&(ccrear==-1))
    {
    printf("Queue is Underflow\n");
    exit(0);
    }
    if(ccfront==ccrear)
    {
	a=ccq[ccfront];
	ccrear=-1;
	ccfront=0;
    }
    else
	if(ccfront==max-1)
	{
	    a=ccq[ccfront];
	    ccfront=0;
	}
	else a=ccq[ccfront++];
	printf("Deleted Element is : %c\n",a);
}
void cdisp()
{
    char i,j;
    if(ccfront==0&&ccrear==-1)
    {
	printf("Queue is Underflow\n");
	exit(0);
    }
    if(ccfront>ccrear)
    {
	for(i=0;i<=ccrear;i++)
	    printf("\t%c",ccq[i]);
	for(j=ccfront;j<=max-1;j++)
	    printf("\n \t%c",ccq[j]);
     //	printf("\nRear is at %d\n",q[rear]);
      //	printf("\nFront is at %d\n",q[front]);
    }
    else
    {
	for(i=ccfront;i<=ccrear;i++)
	{
	    printf("\t%c",ccq[i]);
	}
      //	printf("\nRear is at %d\n",q[rear]);
      //	printf("\nFront is at %d\n",q[front]);
    }
    printf("\n");
}

