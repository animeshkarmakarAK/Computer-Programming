#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    int a[50];
    int n,i;
    cin>>n;
    //memset(a,0,n);
    a[n]={ };
    for(int i=0;i<n;i++)
    {
        //a[i]=0;
        cout<<"\t"<<a[i];
    }
    cout<<endl;


while((scanf("%d",&i)==1))
{
    cout<<"a["<<i<<"] : "<<a[i]<<endl;
    a[i]++;

    for(int i=0;i<n;i++)
{
    for(int j=0;j<a[i];i++)
        cout<<"\n"<<i;
}
}


}
