#include<bits/stdc++.h>

using namespace std;

int main(){



map<char,int>m;

int t;
cin>>t;

while(t--){
string a;
cin>>a;

 int counter = 1;
for(int i = 1;i<=a.size();i++){


if(int(a[i])<=90){
    a[i] = a[i]+32;
   // a[i-1] = a[i-1]+32;
}

if(a[i] == a[i-1]){
    ++counter;
    continue;
}

cout<<counter<<a[i-1];

    counter = 1;


//if(int(a[i])<=90)
    //a[i] = a[i]+32;

 //m[a[i]]++;
 //cout<<a[i]<<"ase" <<m[a[i]]<<"ta"<<endl;

}

cout<<endl;
}

}
