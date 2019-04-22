#include<bits/stdc++.h>

using namespace std;

int GCD(int a, int b)
{
    if(b == 0)
        return a;
    GCD(b,a%b);
}

int LCM(int a, int b)
{
 return b*a/GCD(a,b);
}

int R_Fact(int n ,int c) // this is not the right fact of reverse factorial dont try it
{
    if(n<=1)
        return c-1;

    R_Fact(n/c,++c);
}

int main()
{

    int a,b;
    cin>>a>>b;

    int result = LCM(a,b);
    cout<<result<<endl;

    int n;
    cin>>n;
   int fact = R_Fact(n,2);
   cout<<fact;

    return 0;
}
