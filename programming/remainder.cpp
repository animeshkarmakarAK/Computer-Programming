#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x;
    int m;
    cin>>x>>m;
    int rem = x%m;
    if(x<0)
        cout<<rem+m<<endl;
    else
        cout<<rem<<endl;

        double efsalin = 1e-9;
        cout<<(efsalin)<<endl;

        vector<int>v;

        cout<<" Enter number's for vector "<<endl;
        for(int i=1;i<5;i++){
                int id;
        cin>>id;
            v.push_back(id);
        }

        sort(v.begin(),v.end());

        for(int i=1;i<5;i++)
            cout<<v[i]<<" ";
            cout<<endl;

        reverse(v.begin(),v.end());

        for(int i=1;i<5;i++)
            cout<<v[i]<<" ";
            cout<<endl;

        random_shuffle(v.begin(),v.end());
        for(int i=1;i<5;i++)
            cout<<v[i]<<" ";
            cout<<endl;

    return 0;
}
