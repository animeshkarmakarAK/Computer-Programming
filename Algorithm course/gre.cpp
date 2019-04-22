#include<bits/stdc++.h>

using namespace std;

class jb{

public:
  char  job;
    int profit;
    int deadline;

    int isGreater(int x,y)
    {
        return x>y;
    }

};

int main()
{
    jb ob[50];

    cout<<"No. of jobs:";
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>ob[i].job;
        cin>>ob[i].profit;
        cin>>ob[i].deadline;
    }

   /* for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--){
        if(ob[i].profit>ob[i+1].profit)
            swap(ob[i],ob[i+1]);
        }
    }*/

    sort(ob[1],ob[n],isgreater<int >)

    for(int i=1;i<=n;i++)
        cout<<"\n"<<ob[i].profit;
}
