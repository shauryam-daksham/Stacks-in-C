#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int st[MAX],top=-1;
void push(int st[],int val);
int pop(int st[]);
void display(int st[]);
int main()
{
int val,option;
do
{
printf("\nMENU");
printf("\n1.PUSH");
printf("\n2.POP");
printf("\n3.DISPLAY");
printf("\n4.EXIT");
printf("\nENTER CHOICE:");
scanf("%d",&option);
switch(option)
{
case 1:
     printf("\nEnter number to be pushed on stack : ");
     scanf("%d",&val);
     push(st,val);
     break;
case 2:
      val = pop(st);
      if(val != -1)
      {
       printf("\n The value to be deleted is : %d",val);
      }
      break;
case 3:
     display(st);
     break;
     default: printf("\nINVALID CHOICE");
  }
}while(option!=4);
return 0;
}
void push(int st[],int val)
{
 if(top ==MAX -1)
 {
   printf("\nStack Overflow");
 }
 else 
 {
  top++;
  st[top]=val;
 }
}
int pop(int st[])
{
  int val;
  if(top==-1)
  {
    printf("STACK IS EMPTY");
    return -1;
  }
  else 
  {
    val = st[top];
    top--;
    return val;
  }
}
void display(int st[])
{
  int i;
  if(top==-1)
  printf("STACK IS EMPTY");
  else 
  {
    for(i=top;i>=0;i--)
    {
      printf("\n%d",st[i]);
      printf("\n");
    }
  }
}


      
       
