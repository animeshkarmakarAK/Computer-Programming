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

void str(string a, string b)
{

}
int n = 9;
int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
int max_sum(int x)
{
    rep(i,n-1)
    {
        x = max(x,x+max_sum(arr[i]));
    }

    return x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

     cout<<max_sum(INT_MIN)<<endl;
    return 0;
}

