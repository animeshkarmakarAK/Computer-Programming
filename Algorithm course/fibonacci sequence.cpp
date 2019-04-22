#include<bits/stdc++.h>

using namespace std;


int main()
{
    queue<int>s;
    int n;

   // cin>> n;
    while(cin>>n){
        s.push(n);
       cout<<s.front();
    }

    for(int i=0;i<=s.size();i++){
       cout<<"front:"<<s.front();
       cout<<"back:"<<s.back();
       s.pop();
       s.front()=7;//wow i can insert directly  Amazing!!!
    }
}
