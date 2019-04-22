#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
    int n;
     vector<int>v;
    cout<<"how many no:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%4==1)
        {
           // cout<<i<<"is a modulo 4 number\n\n";
            v.push_back(i);
        }

    }
    for(int i=0;i<v.size();i++)
        cout<<"\nmodulo 4 is:"<<v[i];
}
