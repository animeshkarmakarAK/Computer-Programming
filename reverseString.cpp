#include<bits/stdc++.h>

using namespace std;

int check(int a , int b , string str){
    if(str[a] != str[b])
    return 0;
if(a == b)
    return 1;
//cout<<a<<b<<endl;
check(a+1 , b-1 , str);

}
int show(){
cout<<"this is ak"<<endl;
}

int main(){

string a;
cin>>a;
int result = check(0,a.size()-1,a);
if(result == 0)
    cout<<"this is not similiar with reverse"<<endl;
else
    cout<<" Yes similiar"<<endl;

}

