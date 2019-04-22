#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<cstdio>
#include<ctype.h>

using namespace std;

class st{

public:
    int string_processing(char t[])
    {
        for(int i=0;t[i]!='\0';i++)
        {
            cout<<t[i]<<endl;
            if(isspace(t[i]))
            {

                int x=atoi(t);
                cout<<"X="<<x<<endl;
            }
        }
    }

};

int main()
{
    st ob1;

    char s[]="567 28";
    int num;
    num=atoi(s);
    cout<<num<<endl;;
   // for(int i=0;s)
    ob1.string_processing(s);


    return 0;
}
