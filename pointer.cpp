#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a[] = {1,2,3,4};
    int *p = &a[0];

   // cout<<*p<<endl;
   // cout<<p[]<<endl;
    //cout<<*p<<endl;


    while(p)
    {
        cout<<*p<<endl;
        p++;
    }
}
