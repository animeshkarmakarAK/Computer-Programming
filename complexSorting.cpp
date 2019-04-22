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


struct data{

    char name[50];
    int height,weight;
    ull income;
};

vector<data>v;

bool compare(data a,data b)
{
    if(a.income == b.income)
    {
        if(a.height == b.height)
        {
            if(a.weight == b.weight)
            {
                return strlen(a.name) < strlen(b.name);
            }else return a.weight < b.weight;
        }else return a.height > b.height;
    }else return a.income > b.income;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    data a;
    cin>>a.name>>a.height>>a.weight>>a.income;
    v.pb(a);
    data b;
    cin>>b.name>>b.height>>b.weight>>b.income;
    v.pb(b);
    sort(v.begin(),v.end(),compare);
    cout<<compare(a,b)<<endl;
    cout<<"Lucky bride"<<endl;
    cout<<v[0].name;
    cout<<v[0].income;
    return 0;
}

