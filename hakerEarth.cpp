#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

ll gcd(ll a, ll b)
{
    if(b == 0)
        return a;
    gcd(b,a%b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>common_factor;
    ll a,b;
    cin>>a>>b;

    if(a == 1 || b == 1){
            cout<<1<<endl;
        //return 1;
    }
        //return 1;
    else{
   ll d = gcd(a,b);
   int counter = 0;
   for(int i = 1; i<=sqrt(d); i++)
   {
       if(d%i == 0){
        //common_factor.push_back(i);
        //common_factor.push_back(d/i);
        counter+=2;
       }
   }

   cout<<counter<<endl;
    }
   return 0;
}
