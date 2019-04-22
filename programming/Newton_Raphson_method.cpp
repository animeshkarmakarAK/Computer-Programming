#include<bits/stdc++.h>

using namespace std;
 float f(float x)
 {
     return (pow(x,3)-2*x-5);
 }
 float ff(float x)
 {
     return (3*pow(x,2)-2);
 }

int main()
{
    float a,c,tolerance = 0.0001;
    cin>>a;
    for(int i =0;i<=10;i++){
        c = a-(f(a)/ff(a));
        if(fabs(a-c)<=tolerance)
            break;
        a=c;
    }

    cout<<"The root is: "<<c<<endl;
}
