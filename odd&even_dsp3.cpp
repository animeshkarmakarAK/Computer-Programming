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
#define ull uint64_t
#define sqr(x) x*x
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define mod 1000000007
#define inf 1e9
#define pi acos(-1.0)
#define sz(v) v.size()

#define ones(x) __builtin_popcount(x)
#define onesl(x) __builtin_popcountl(x)
#define onesll(x) __builtin_popcountll(x)

int Set(int N,int pos)
{
    return N=N | (1<<pos);
}
int reset(int N,int pos)
{
    return N= N & ~(1<<pos);
}
bool check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}

/**
    ordered_set X;

    X.insert(1);
    X.insert(2);
    X.insert(4);
    X.insert(8);
    X.insert(16);

    cout<<*X.find_by_order(1)<<endl; // 2
    cout<<*X.find_by_order(2)<<endl; // 4
    cout<<*X.find_by_order(4)<<endl; // 16
    cout<<(end(X)==X.find_by_order(6))<<endl; // true
     cout<<X.order_of_key(-5)<<endl;  // 0
    cout<<X.order_of_key(1)<<endl;   // 0
    cout<<X.order_of_key(3)<<endl;   // 2
    cout<<X.order_of_key(4)<<endl;   // 2
    cout<<X.order_of_key(400)<<endl; // 5
*/

/** MIN_HEAP

(1)    priority_queue <int, vector<int>, greater<int> > min_heap;


(2) class myComparator
    {
    public:
        int operator() (const myClass& p1, const myClass& p2)
        {
            return p1.getX() > p2.getX();
        }
    };
      priority_queue <myClass, vector<myClass>, myComparator > min_heap;

*/

/**

int month[]={-1,31,28,31,30,31,30,31,31,30,31,30,31};  //Not Leap Year

int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1}; //4 Direction

int dx[]={1,1,0,-1,-1,-1,0,1};
int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction

int dx[]={2,1,-1,-2,-2,-1,1,2};
int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction (horse)

**/

void shift(double x[],int n, int st)
{
cout<<n <<" " <<st<<endl;

        for(int i = n-1; i>=0; i-- )
        {
            x[i+st] = x[i];
        }

        for(int i = 0; i<st; i++)
            x[i] = 0;


    rep(i,st+n)
    cout<<x[i]<<" ";
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    double x[100],xf[100];
    mem(xf,0);
    mem(x,0);
    int cnt = 0;
    while(cin.peek() != '\n')
    {
        cin>>x[cnt++];
    }
    //cnt = size()

    int x_start;
    printf("enter starting point : ");
    cin>>x_start;

    //reflect
    rep(i,cnt)
    {
        xf[i] = x[cnt - 1 - i];// i = 0 , cnt-1-i = 4 last element
    }

    int xf_start = cnt - x_start -1;
    int shifting_time = xf_start - x_start;

    // shift shifting times
    if(x_start < xf_start)
    shift(x,cnt ,shifting_time);
    else shift(xf,cnt,shifting_time);


    //odd &&even
     double odd[cnt+shifting_time],even[cnt+shifting_time];

     rep(i,cnt+shifting_time)
     {
         even[i] = (x[i] + xf[i])/2;
         odd[i] = (x[i] - xf[i])/2;
     }

     cout<<"Even components of signal: "<<endl;
     rep(i,cnt+shifting_time)
     {
         cout<<even[i]<<" ";
     }
     cout<<endl;

     cout<<"Odd components of signal : "<<endl;
      rep(i,cnt+shifting_time)
     {
         cout<<odd[i]<<" ";
     }
    cout<<endl;

    return 0;

}

