#include<bits/stdc++.h>

using namespace std;

float fun(float x , float y)
{
    return x+y;
}

float eular_method(float x, float y, float h, float xn){

for(int i = 0; i<xn; ++i){

    float k = h*fun(x,y);
    y+= k;
    x+= h;
}

cout<<y<<endl;

}
int main()
{
    cout<<"Enter value: x0 y0 h && Xn:"<<endl;
    float x,y,h,xn;
    cin>>x>>y>>h>>xn;
    cout<<endl;

    eular_method(x,y,h,xn);
    return 0;
}
