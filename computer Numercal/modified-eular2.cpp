#include<bits/stdc++.h>

using namespace std;

#define tol 0.00001

float fun(float x,float y)
{
    return x*x+y;
}

int main()
{

    cout<<"enter initial value of x: ";
    float x0;
    cin>>x0;
    cout<<endl;

    cout<<"Enter initial value of y: ";
    float y0;
    cin>>y0;
    cout<<endl;

    cout<<"Enter the value of increment(h): ";
    float h;
    cin>>h;
    cout<<endl;

    cout<<"Enter the final value of X: ";
    float xn;
    cin>>xn;
    cout<<endl;
float x1,y1,y11,y=y0;
    for(int i = 1; x0<xn; i++)
    {

          y1 = y0+h*fun(x0,y0);
          x1 = x0+h;

          float w = 100;

          while(w>tol){
            y11 =y0 + (h/2)*(fun(x0,y0)+fun(x1,y1));
            w = y-y11;
            w = fabs(w);

             y = y11;
          }
          x0 = x1;
          y0 = y11;

          cout<<x0<<"\t"<<y0<<endl;
    }
}
