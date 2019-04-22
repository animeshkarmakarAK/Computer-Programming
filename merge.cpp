#include<iostream>
#include<cstdio>
using namespace std;
#define SIZE 3
class merge{

int c[100],i,j;
public:
    int mer_ge (int x,int y)
{
     j=0;
    for(i=1;i<=SIZE;i++)
    {
        (x<y)?c[j++]=x:c[j++]=y;
    }
}

int diplay()
{
    for(int i=1;i<=j;i++)
        cout<<c[i]<<"\n";
}




};
int main(void)
{
    merge ob;
    int a[SIZE];
    int b[SIZE];
    cout<<"1st array:";
    for(int i=1;i<=SIZE;i++)
    cin>>a[i];
    cout<<"2nd array:";
        for(int i=1;i<=SIZE;i++)
    cin>>b[i];



     printf("MERGE ARRAY:\n");
    for(int i=1;i<SIZE;++i)
    for(int j=SIZE-1;j>=i;--j){
            if(a[j]<a[j-1])
            {
               int  x=a[j];
                a[j]=a[j-1];
                a[j-1]=x;
            }}
            for(int i=1;i<SIZE;++i)
    for(int j=SIZE-1;j>=i;--j){
              if(b[j]<b[j-1])
            {
               int  y=b[j];
                b[j]=b[j-1];
                b[j-1]=y;
            }
    }
for(int i=1;i<=SIZE;i++)
    ob.mer_ge( a[i], b[i]);
    ob.diplay();
}
