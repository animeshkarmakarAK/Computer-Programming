#include<iostream>
#include<cstdlib>
using namespace std;




class ide{

    int a[50];
    int tos=-1;
    public:
int in_sert(int t)
{
    a[tos++]=t;
}

int de_lete()
{
    a[tos--];
}
int show()
{
    for(int i=0;i<=tos;i++)
    {
        cout<<a[i]<<endl;
    }
}
};


int main()
{
     ide ob1;
     int n;
    for(; ;)
    {
        int a[50],x;

        cout<<"1.insert\n2.delete\n3.exit\n";
        cin>>n;
        if(n==1)
        {
            cout<<"enter no:";
            cin>>x;

            ob1.in_sert(x);
            ob1.show();
            }
        if(n==2)
            ob1.de_lete();
            ob1.show();
        if(n==3)
            break;

    }
    system("cls");
   // ob1.show();
}

