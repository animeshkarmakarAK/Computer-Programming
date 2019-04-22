#include<iostream>// just akta string type ar STL use kora dekha
                  //hoyce ja main code a kono effect fele na

#include<cstdio>
#include<vector>
using namespace std;
int main(void)
{
    int n,t;
string a;
    vector<int>v;
    vector<string>vs;

    v.push_back(1);
    v.push_back(1);


      cout<<"how many no:";
   //v.push_back("how many no:");
     // cin>>a;

     cout<<"\n pls! enter now";
     cin>>n;

//   clrscr();

    for(int i=0;i<n;i++)
    {
       t=v[i]+v[i+1];
        v.push_back(t);
    }


        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<"\t\t";
        }
        cout<<"......";
}
