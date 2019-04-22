#include<iostream>
#include<cstring>
#include<ctype.h>
int a[100];
int top=-1;

using namespace std;


//int a[100];
//int top=0;
int push(int x)
{
    a[++top]=x;
    cout<<"top="<<top;
    cout<<a[top];
}

int pop()
{
    return(a[top--]);
     cout<<"top="<<top;
    cout<<a[top];
}


int main()
{
    char st[100],ch;
    int v1,v2,i=0 ;
    cout<<"enter postfix expression:";
 cin>>st;
 cout<<st;
while(ch=st[i++]!='\0')
    {
        if(isdigit(ch))
        {
            push(ch-'0');
        }
        else{
            v1=pop();
            cout<<"v1="<<v1;
            v2=pop();
              cout<<"v2="<<v2;
            switch(ch)
        {
            case '+':push(v2+v1);
            break;
            case '-':push(v2-v1);
              break;
            case '*':push(v2*v1);
              break;
            case '/':push(v2/v1);
              break;
        }
        }
    }
    cout<<"postfix expression is:"<<st<<endl;
    cout<<"After evaluation:"<<a[top];

}

 /*
 #include<cstdio>
#include<iostream>
#include <ctype.h>
int s[100];
int top=-1;
using namespace std;

//#define SIZE 50


int push(int elem)
{
 s[++top]=elem;
}

int pop()
{
 return(s[top--]);
}

main()
{
 char pofx[50],ch;
 int i=0,op1,op2;
 printf("\n\nRead the Postfix Expression ? ");
 scanf("%s",pofx);
 while( (ch=pofx[i++]) != '\0')
 {
  if(isdigit(ch)) push(ch-'0');

  else
  {
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
 printf("\n Result after Evaluation: %d\n",s[top]);
}*/
