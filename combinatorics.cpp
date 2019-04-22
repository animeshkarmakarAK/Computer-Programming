#include<bits/stdc++.h>
#define rep(i,n) for(int i = 1; i<=int(n) ; ++i)

using namespace std;
#define MAX 1000000
#define mem(x,y) memset(x,y,sizeof(x));
typedef long long int ll;
ll counter = 0;
int dp[MAX];

int comb(int n)
{
        if(n == 0)
         counter++;
        // if(dp[n])
          //  return dp[n];
        rep(i,n){
        dp[n] = comb(n-i);
       //cout<<endl;
        }
     //  return counter;
}
int main()
{
    mem(dp,0)
    int n;
    cin>>n;
    comb(n);
   cout<<counter<<endl;
   rep(i,MAX){
       if(dp[i])
   cout<<dp[i]<<"\t";
   }

   return 0;
}
