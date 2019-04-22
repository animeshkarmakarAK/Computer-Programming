#include<iostream>
using namespace  std;

class ins{
int arr[50];
int tos,d;

public:

    int init()
    {
        tos=0;
        d=0;
    }

    int ins_ert(int x, int y)
    {
        arr=new[50];
        arr[x]=y;
        d++;
    }

int show()
{
    for(arr[50]!='\0')
    {
        cout<<arr[]
    }
}
};


int main()
{
    ins ob;
    int n,item;
    for(; ;)
    {
        ob.init();
        cout<<"place";
        cin>>n;
        cin>>item;
        ob.ins_ert(n,item);


    }
}
