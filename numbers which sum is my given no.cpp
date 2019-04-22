#include<iostream>   //a simple problem output a 1 ase na
#include<vector>      //RUN AND SEE
using namespace std;


int main(void)
{

    int n;
    vector<int>v;

    cin>> n;


    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            v.push_back(i);
    }



      for(int i=1;i<v.size();i++)
      {
          cout<<v[i];
          if(i<v.size()-1)
            cout<<"+";
      }
}
