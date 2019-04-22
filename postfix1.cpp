#include<iostream>
#include<cstdio>
#include<cstring>
//#include<ctype>

using namespace std;
//int ss[50];
int top=-1;
int push(int a)
{
    s[top++]=a;
}

int pop()
{
    s[top--];
}


int main()
{

int arr[10];
int l;
char *s;
gets(s);
l=strlen(s);
int op1,op2;
for(int i=0;i<l;i++)
{
    if(isdigit(s[i]))
    {
        push(s[i]);
    }

    else{
        op2=pop();
        op1=pop();

        if(s[i]=='+')
        {
            push(op1+op2);
        }

                if(s[i]=='-')
                {
                    push(op1-op2);
                }

                        if(s[i]=='*')
                        {
                            push(op1*op2);
                        }


                                if(s[i]=='+')
                                {
                                    push(op1+op2);
                                }





    }

}
cout<<s[top];

return 0;
}
