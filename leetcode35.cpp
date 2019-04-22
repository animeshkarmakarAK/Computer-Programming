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

int arr[] = {1,3,5,6};

int pos(int t)
{
    int idx = 0;
    int n = sizeof(arr)/sizeof(arr[0]);

    while(idx < n && t >= arr[idx])
    {
        if(arr[idx] == t)
            return idx;
        ++idx;
    }
    return idx;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int val;
    cin>>val;
    cout<<pos(val)<<endl;
}
