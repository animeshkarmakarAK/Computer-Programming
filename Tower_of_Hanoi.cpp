#include<iostream>

using namespace std;
int i=0;
void tower(int n,char beg,char aux,char en_d)
{

    if(n>=1)
    {
          ++i;
        tower(n-1,beg,en_d,aux);
        //cout<<"\n\n"<<11<<endl;
        cout<<"disk replace from  "<< beg<<"  to  "<<en_d<<endl;
        tower(n-1,aux,beg,en_d);
               // cout<<"\n\n"<<22<<endl;

    }
}
int main()
{
    int n;
    char a,b,c;
    cout<<"NO. of disks:";
    cin>>n;
    tower(n,'a','b','c');
    cout<<"\t\n\n total moves:"<<i;
    return 0;
}
