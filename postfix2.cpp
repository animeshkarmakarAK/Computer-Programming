

#define SIZE 50            /* Size of Stack */
#include <ctype.h>
#include<iostream>
#include<cstdio>

using namespace std;
int s[SIZE];
int top=-1;       /* Global declarations */

int push(int elem)
{                       /* Function for PUSH operation */
 s[++top]=elem;
}

int pop()
{                      /* Function for POP operation */
 return(s[top--]);
}

main()
{                         /* Main Program */
 char pofx[50],ch;
 int i=0,op1,op2;
 printf("\n\nRead the Postfix Expression ? ");
 scanf("%s",pofx);
 while( (ch=pofx[i++]) != '\0')
 {
  if(isdigit(ch)) push(ch-'0' ); /* Push the operand */
  else
  {        /* Operator,pop two  operands */
   op2=pop();
   op1=pop();
   switch(ch)
   {
   case '+':push(op1+op2);break;
   case '-':push(op1-op2);break;
   case '*':push(op1*op2);break;
   case '/':push(op1/op2);break;
   }
  }
 }
 printf("\n Given Postfix Expn: %s\n",pofx);
printf("after evaluation %d",s[top]);
}
