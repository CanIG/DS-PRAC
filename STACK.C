#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define ms 5

struct stackstruct
{
   int top;
   int arr[ms];
};

typedef struct stackstruct STK;

void initialize(STK *s)
{
   s->top = -1;
}

int isfulls(STK s)
{
   if(s.top == ms-1)
      return 1;
   else
      return 0;
}

int isemptys(STK s)
{
   if(s.top == -1)
      return 1;
   else
      return 0;
}

void push(STK *s)
{
   int x;
   if(isfulls(*s))
      printf("Stack is overflow.....\n");
   else
      {
	 printf("Enter element to be pushed : ");
	 scanf("%d",&x);
	 s->top++;
	 s->arr[s->top] = x;
      }
}

void pop(STK *s)
{
   int x;
   if(isemptys(*s))
      printf("Stack is underflow.....\n");
   else
      {
	 x = s->arr[s->top];
	 s->top--;
	 printf("%d is popped out.\n",x);
      }
}

int peek(STK s)
{
   return (s.arr[s.top]);
}

void printstk(STK s)
{
  int i;
  printf("Elements in the stack are.....\n");
  for(i=s.top;i>=0;i--)
     printf("%d\n",s.arr[i]);
  printf("\n");
}

void main()
{
  STK s;
  int ch=1,x,i;
  clrscr();
  initialize(&s); // s.top = -1;
  printf("MENU for operations on STACK.....\n");
  printf("1. PUSH\n2. POP\n3. PEEK\n4. PRINT\n5. QUIT\n");

  while(ch)
  {
     printf("Enter your choice : ");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1 : push(&s);
		break;
       case 2 : pop(&s);
		break;
       case 3 : if(!isemptys(s))
		{
		   x = peek(s);
		   printf("%d is at the top of stack.\n",x);
		}
		else
		   printf("Stack is Empty.....\n");
		break;
       case 4 : if(!isemptys(s))
		   printstk(s);
		else
		   printf("Stack is empty.....\n");
		break;
       case 5 : exit(1);
       default : printf("ERROR ! Wrong choice.....\n");
     }
  }
  getch();
}














                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
