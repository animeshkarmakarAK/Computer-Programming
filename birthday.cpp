#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repp(i,k,n) for(int i = k; i<=(int)n; i++)
#define si(n) scanf("%d",&n);
#define sc(n) scanf("%c",&n);
#define sl(n) scanf("%lld",&n);
#define print(n) printf("%d",n);
#define print_ll(n) printf("%lld",n);
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
typedef long long int ll;
typedef long long c;
typedef complex<c>P;
#define x real()
#define y imag()
#define ull uint64_t

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ull diff_coins,no_frnd,clcted,gift_min_size;
    cin>>diff_coins>>no_frnd>>clcted>>gift_min_size;

    ull avl_coin = diff_coins - clcted;

    if(avl_coin >= gift_min_size)
    {
        if((avl_coin/no_frnd) * no_frnd >= gift_min_size)
             cout<<"1"<<endl;
        else
             cout<<"-1"<<endl;
    }else
     cout<<"1"<<endl;

/*    if(avl_coin >= gift_min_size && avl_coin >= no_frnd)
        cout<<"1"<<endl;
    else
        cout<<"-1"<<endl;*/

    /*if(diff_coins >= no_frnd)
    {
        if(diff_coins - clcted >= gift_min_size)
        {
            cout<<"1"<<endl;
        }
        else cout<<"-1"<<endl;
    }else cout<<"-1"<<endl;
*/
return 0;
}

