#include<iostream>

using namespace std;

    int  tower(int n,int a,int b,int c)
    {
        if(n==1)
        {
            cout<<"\nbrics replace to "<<a<<"to"<<b<<endl;
            //return;
        }
        tower(n-1,a,b,c);
                    cout<<"\nbrics replace to "<<a<<"to"<<c<<endl;

        tower(n-1,a,c,b);
    }

int main()
{
    int n;
    cout<<"How many bricks:";
    cin>>n;
   static  int a=1,b=2,c=3;
    tower(n,a,b,c);

}
