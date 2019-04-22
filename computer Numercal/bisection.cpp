#include<bits/stdc++.h>

using namespace std;

float f(float x)
{
    return pow(x,3)-x-1;
}


int main(){

float a,b,tolerance = 0.01;
cout<<"Enter two number: a&b";
cin>>a>>b;
cout<<endl;

if((f(a)*f(b))<0){
        float xrr = 0;
        for(int i = 0;i<20;i++){
    float xr = (a+b)/2;
    float f_xr = f(xr);
    if((f(a)*f(xr))>0)
         a = xr;
         else if(f(a)*f(xr)<0)
            b=xr;
         else {
            cout<<xr<<"is the root "<<endl;
            break;
         }

        float tol = ((xrr-xr)/xr)*100;
          xrr = xr;
         if(tol<=tolerance){
            cout<<xr<<"is the root"<<endl;
            break;
         }
        }


}else cout<<"choose wrong number"<<endl;


}
