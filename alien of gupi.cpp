#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

int main()
{
    int n,d=0;
    float a;
    float x;

        scanf("%d",&n);
    vector<float>v,b;
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a);
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++){
        x=v[i];
        while(x>1)
        {
            x=x/2;
            d++;
        }
            b.push_back(d);
            d=0;
    }

        for(int i=0;i<b.size();i++){
                cout<<b[i]<<" days"<<endl;
                  }
    return 0;
}
