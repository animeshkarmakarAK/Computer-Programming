#include<bits/stdc++.h>

using namespace std;
  int re = 1;
int gcdRecursion(int a , int b)
{
    if(b == 0)
       return a;

     gcdRecursion(b,a%b);
}

int main()
{
 cout<<"GCD of a && b"<<endl;
 int a,b;
 cin>>a>>b;
cout<<gcdRecursion(a,b)<<endl;
return 0;
int c = max(a,b);
int d = min(a,b);

a = c;
b = d;
 int gcd = gcdRecursion(a,b);
 cout<<gcd<<endl;

 return 0;

}
