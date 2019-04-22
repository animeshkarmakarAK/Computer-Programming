#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v;
    int i,j;
    int a[19];
    int count=0;

    scanf("%d %d",&i,&j);

    while(i!=j)
    {
        count=0;
        while(j!=1)
        {
            count++;
            if(j%2==0)
                j=j/2;
            else
                j=3*j+1;
        }
        v.push_back(count);

    }
  for(int i=0;i<=v.size();i++)
    cout<<"\n"<<v[i];
}
