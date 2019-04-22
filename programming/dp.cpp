#include<bits/stdc++.h>

using namespace std;

int dp[20];
//শুরুতে ডিপি অ্যারের সবগুলো ইনডেক্সে -১ বসিয়ে নাও
//যেমন for(int i=0;i<20;i++)dp[i]=-1; (এই কাজটা মেইন ফাংশনে করবে)
//কোনো ঘরে -১ থাকা মানে হচ্ছে ঘরটা খালি
int F( int n ) {
if( n == 0 ) return 0;
if( n == 1 ) return 1;
if( dp[n]!=-1 ) return dp[n];
else
{
dp[n] = F( n-1 ) + F( n-2 );
return dp[n];
}
}

int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    int result;
   result= F(n);
   cout<<result<<endl;

    return 0;
}

