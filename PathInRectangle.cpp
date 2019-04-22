#include<bits/stdc++.h>

using namespace std;

int main(){

int m,n;
cout<<"Input Row & Column of an array :";
cin>>m>>n;
cout<<endl;

cout<<"No of circles in array :";

int k;
cin>>k;
cout<<endl;

int x[10],y[10];

for(int i = 0;i<k;++i){
    cin>>x[i];
}

for(int i = 0;i<k;++i){
    cin>>y[i];
}

int radius;
cout<<"input radius:";
cin>>radius;
cout<<endl;

bool possible = true;

 for(int i = 0; i<k; ++i){
    if(y[i]-1<=1)
        possible = false;
    if(y[i]+1>=n)
        possible = false;
 }

 if(possible == false)
    cout<<"Impossible"<<endl;
    else
 cout<<"Possible"<<endl;



}
