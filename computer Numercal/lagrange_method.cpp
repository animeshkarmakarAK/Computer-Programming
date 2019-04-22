#include<bits/stdc++.h>

using namespace std;

int main()
{
    float x[10],y[10];
    int n;
    cin>>n;
    cout<<"Enter the value of xi && yi"<<endl;
    for(int i = 0;i<n;++i){
        cin>>x[i]>>y[i];
    }
    cout<<"Enter the value of X for finding f(x):"<<endl;

    for(int i=0;i<n;i++){
            float temp =1;
        for(int j=0;j<n;++j){
            if(i==j)
                continue;
            else
            {
                temp*=x-x[j]/x[i]-x[j];
            }
        }
    }
}
