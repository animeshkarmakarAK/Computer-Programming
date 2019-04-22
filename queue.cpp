#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
#define MAX 50
class qu_eue{
    int rear =-1;
    int fr_ont =-1;
    int a[MAX];
public:
    int in_sert(int x)
    {
        rear=rear+1;
        a[rear]=x;
        if(rear==MAX-1)
            cout<<"overflow\n";

    }


    int del()
    {

        if(fr_ont>=rear)
            cout<<"empty queue\n";
            else {
              fr_ont=fr_ont+1;
    int y=a[fr_ont];
    if(fr_ont==MAX)
        cout<<"underflow\n";
            }


    }

    int  show_queue()
    {
        for(int i=fr_ont+1;i<=rear;i++)
            printf( "%5d",a[i]);
    }

};


int main(void)
{
    qu_eue ob1;
    int k;
    int item;
    for(; ;)
    {
        cout<<"\n1.insert\n2.delete\n3.exit\n";
        cin>>k;
        if(k==1)
        {
            cout<<"enter inserting value:";
            cin>>item;
            ob1.in_sert(item);
             ob1.show_queue();
                    }

                    if(k==2)
                    {
                        ob1.del();
                         ob1.show_queue();
                    }


                    if(k==3)
                    {
                        break;
                    }
                    cout<<flush;
                    system("cls");
                                             ob1.show_queue();





    }
    return 0;

}
