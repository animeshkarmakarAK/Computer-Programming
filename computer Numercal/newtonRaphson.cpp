#include<bits/stdc++.h>

using namespace std;
#define tolerance 0.001

double f(double x)//func
{
    return x*x*x - x*x + 2;
}

//function for derivation

double ff(double x)//derivFunc
{
    return 3*x*x - 2*x;
}

void newtonRaphson(double x)
{
    double h = ff(x)/f(x);
  while(abs(h)>=tolerance)
  {
      h = ff(x)/f(x);
      x = x-h;
  }

  cout<<"The value of root is : "<<x<<endl;
}

int main()
{
    double a ;
    cout<<"Enter initial assumed value: ";
    cin>>a;
    cout<<endl;
    newtonRaphson(a);

    return 0;
}
