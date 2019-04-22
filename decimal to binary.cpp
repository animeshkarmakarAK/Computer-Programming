#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

typedef long long int ll;

vector<int> decTobin(ll n)
{
    vector<int>v;
    while(n)
    {
        int rem = n%2;
        v.push_back(rem);
        n/=2;

    }
    return v;
}


/*int main(void)
{
    vector<int>v,t;
    int a,i;

    cout<<"decimal to binary:\n";
    cin>>a;
    do{
        v.push_back(a%2);
        a=a/2;
    }while(a!=0);

cout<<"v size="<<v.size()<<"\n";
    for(int indx=v.size()-1;indx>=0;indx--)
        cout<<v[indx];


        cout<<"binary to decimal:\n";
        int d=0,k=0;
        cin>>a;
        t.push_back(a);
        cout<<"t size"<<t.size()<<"\n"<<" begin no";
        for(int i=t.size()-1;i>=0;i--)
        {
            d=d+t[0][k++]*pow(2,i);
            cout<<"t[]="<<t[0][k++]<<"\n";
        }
        cout<<d;

}*/

int main()
{
    ll n;
    cin>>n;
    vector<int>bin;
    bin = decTobin(n);

    for(int i = bin.size()-1;i>=0;i--)
        cout<<bin[i];
    cout<<endl;
    cout<<bin.size();
    return 0;
}
