#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int arr[50];
int tos=0;
int push(int a)
{
    arr[tos]=a;
    tos++;
   // print("\npush value%d",arr[tos]);
}


int pop()
{
   return( arr[--tos]);
    //printf("\npop value=%d",arr[tos]);
}


int main()
{
    char ch[50];
    int op1,op2,l,i;
    gets(ch);
    l=strlen(ch);
    for(i=1;i<=l;i++)
    {
        if(isdigit(ch[i]))
        {
            push(ch[i]-'0');
        }


        else
        {
            op1=pop();
            op2=pop();
            switch(ch[i])
            {
                case '+':push(op2+op1);
                break;


               case '-':push(op2-op1);
                break;

                case '*':push(op2*op1);
                break;


                case '/':push(op2/op1);
                break;
            }
        }
    }
    printf("%d",arr[tos]);
}
