#include<cstdio>
#include<iostream>
using namespace std;
int main(void)
{
    int i,j,v,isprime;
    int n,a[100],k=0;
    cout<<"Terminal no:";
    cin>>n;
    cout<<"visualised prime no:";
    cin>>v;
    for(i=2;i<=n;i++)
    {
        isprime=1;
        for(j=2;j<i;j++)
            if(i%j==0)
            isprime=0;
        if(isprime==1)
        {
            a[k++]=i;
            cout<<"\na[]"<<a[1]<<"\n"<<i;
        }
    }
    cout<<"k"<<k;
    cout<<"\n";
    if(n%2==0)
    {
        for(int i=k-(v*2);i<v*2;i++)
        {
            cout<<a[i];
        }
    }
}
