#include<stdio.h>
#include<conio.h>
#include<string.h>
#define ms 5
struct stackopd
{
   int top1;
   int arr1[ms];
};

typedef struct stackopd STKD;

void initialize1(STKD *s)
{
   s->top1 = -1;
}

int isfulls1(STKD s)
{
   if(s.top1 == ms-1)
      return 1;
   else
      return 0;
}

int isemptys1(STKD s)
{
   if(s.top1 == -1)
      return 1;
   else
      return 0;
}

void push1(STKD *s,int x)
{
   if(isfulls1(*s))
      printf("Stack is overflow.....\n");
   else
      {
	 s->top1++;
	 s->arr1[s->top1] = x;
      }
}

int pop1(STKD *s)
{
   int x = -1;
   if(isemptys1(*s))
      printf("Stack is underflow.....\n");
   else
      {
	 x = s->arr1[s->top1];
	 s->top1--;
      }
   return x;
}

int evaluate(char opr,int x, int y)
{
  int i,p=1;
  switch(opr)
  {
    case '+' : return(x+y);
    case '-' : return(x-y);
    case '*' : return(x*y);
    case '/' : return(x/y);
    case '%' : return(x%y);
    case '^' : for(i=1;i<=y;i++)
		  p *= x;
	       return p;
  }
}

void main()
{
  STKD s1;
  int x,i,len,cnt,a,b,c;
  char postexpr[25],ch;
  clrscr();
  printf("Enter the infix expression : ");
  scanf("%s",postexpr);
  initialize1(&s1);
  for(i=0;i<strlen(postexpr);i++)
   {
     ch = postexpr[i];
     if((ch>=48)&&(ch<=57))
	push1(&s1,ch-48);
     else
	{
	  b = pop1(&s1);
	  a = pop1(&s1);
	  c = evaluate(ch,a,b);
	  push1(&s1,c);
	}
     }
  printf("\nResult of the expression = %d",pop1(&s1));
  getch();
}


/*
OUTPUT OF PROGRAM :

Enter the infix expression : 2*3+8-9/3%2*5+4^2

POSTFIX expression is 23*8+93/2%5*-42^+

Result of the expression = 25
*/
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
