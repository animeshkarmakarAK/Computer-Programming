#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    b=reverse a;
    if(a==b)
    {
        cout<<a<<"is a palindrome number";
    }
}
