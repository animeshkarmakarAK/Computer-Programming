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

int w, b;

int pal(int s , int l , int a[],int cost)
{
 if(s>l)
    return cost;
 if(s == l && a[s] ==2)
    cost += min(w,b);

 if(a[s] != a[l] && (a[s] != 2 && a[l] != 2))
   return -1;

   if(a[s] != a[l]  && a[s] == 2){
    a[s] = a[l];
    if(a[s] == 0)
        cost += w;
    else
        cost += b;
   }

   if(a[s] != a[l] && a[l] == 2)
   {
       a[l] = a[s];
       if(a[l] == 0)
        cost += w;
       else
        cost += b;
   }

    pal(++s,--l,a,cost);

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n>>w>>b;

    int a[n];
    rep(i,n)
    cin>>a[i];

    int start = 0;
    int last = n-1;


    cout<<pal(start , last , a,0)<<endl;
    return 0;
}
