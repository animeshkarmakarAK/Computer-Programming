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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a,b,c,d,p,n;
    cin>>p>>a>>b>>c>>d>>n;
     double max_p = p *(sin(a * 1 + b) + cos(c * 1 + d) + 2);
     double  decline = 0;

    repp(i,2,n)
    {
        double curr = p *(sin(a * i + b) + cos(c * i + d) + 2);
        if(max_p > curr)
        {
            if(decline < max_p - curr)
                decline = max_p - curr;
        }
        else max_p = curr;
    }

   printf("%.8lf",decline);


    return 0;
}

