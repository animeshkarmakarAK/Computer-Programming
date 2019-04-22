#include<bits/stdc++.h>

using namespace std;

float func(float x)
{

    return x*x+2*x+3;
}

int main()

{
    cout<<"Enter a initial value: a";
    float a;
    cin>>a;
    cout<<endl;

    cout<<"Enter a final value: b";
    float b;
    cin>>b;
    cout<<endl;

    cout<<"Enter n";
    int n;
    cin>>n;

    float sum = a+b;
    float h = b-a/n;

    for(int i = 1;i<n;i++){
        sum+= 2*func(a*i*h);
    }

    cout<<"Integral is : "<<sum<<endl;

}
