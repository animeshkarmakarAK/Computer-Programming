#include<iostream>
#include<vector>
using namespace std;


int main(void)
{
    int t=0;
    vector<int>v;

    for(int i=1;i<10;i++){
        for(int j=1;j<=i+1;j++)
        t=t+j;


        v.push_back(t);

    }


      cout<<"triangle numbers are:\n...............\n";
       for(int k=1;k<=v.size();k++)
       {
         cout<<v[k]<<"\n";
       }
}



