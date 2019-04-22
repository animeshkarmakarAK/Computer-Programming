#include<bits/stdc++.h>
//#define tolerance 0.1
using namespace std;


float f(float x)
{
  return (pow(x,3)-2*x-5);
}

int main()
{
 int total_no_iteration=10;
 float a,b,tolerance = 0.001;
 float c;
 cout<<"Enter two initial approximation no.";
 cin>>a>>b;
 cout<<endl;
 for(int i=0;i<=10;i++){
    c = (a*f(b) - b*f(a))/(f(b)-f(a));

    cout<<c<<endl;
   if(fabs(b-c)<=tolerance)
    break;
    a=b;
    b=c;
 }
 cout<<"The required root is : "<<c<<endl;
 return 0;
}
