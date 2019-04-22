#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repp(i,k,n) for(int i = k; i<=(int)n; i++)
#define pb(x) push_back(x)
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
#define pmp make_pair
#define uu first
#define vv second
using namespace std;
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
typedef vector<int> vi;
typedef vector<int,int>vii;
typedef vector<pii> vpi;
#define MAX 100
int arr[] = {6,2,5,1,7,4,8,3};
int n = sizeof(arr)/sizeof(arr[0]);
int dp[MAX];
//NOT DONE !
//THERE IS A PROBLEM THAT IT GOING TO BE LINEAR HAVE ANY OTHER PROCEDURE ... CHECK IT

int lis(int item)
{
    if(item == n)
        return 0;

    repp(i,item,n)
    {
    if(arr[item] >= arr[i+1])
      {
        //cout<<item<<"\t"<<arr[i]
        dp[item] += 1;
        //lis(item+1);
      }
    }
   lis(item+1);
}

int main()
{
    mem(dp,0);
    lis(0);

    rep(i,n)
    cout<<dp[i]<<"\t";

    return 0;
}
