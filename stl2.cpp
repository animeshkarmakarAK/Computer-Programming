#include<iostream>
#include<cstring>
#include<vector>

using namespace std;
int main(void)


{
    string a;
    vector<string>v;
    cin>>a;
    v.push_back(a);
    cout<<a<<"\n";

    int m= a.size();
    for(int i=0;i<a.size();i++){
        for(int j=i;j<m;j++)
    {
        cout<<a[j];

    }
    cout<<"\n";}
}
