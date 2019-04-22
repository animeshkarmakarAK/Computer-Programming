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
string longestCommonPrefix(vector<string>&str)
{

    string prefix = "";
    for(int idx = 0; str.size()>0; prefix += str[0][idx],idx++)
        for(int i = 0; i<str.size(); i++)
            if(idx > str[i].size() ||(i>0 && str[i][idx] != str[i-1][idx]))
                return prefix;
        return prefix;
}

map<int,double>mymap;

void shift(double x[],int n)
{
    int x_size = 4;
    while(n--)
    {
      for(int i = x_size -1; i>=0 ;i--)
      {
          x[i+1] = x[i];
      }
      x[0] = 0;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int x[100],int xf[100];
    int cnt = 0;

    while(cin.peek() != '\n')
    {
        cin>>x[cnt++];
    }

    cout<<i<<endl;
    return 0;

    /*cout<<"Enter Number of signal component: ";
    int n;
    cin>>n;

    int idx,start_idx;
    double amp;
    bool start = false;
    while(n--){
            if(start == false)
                start_idx = idx;

        cin>>idx>>amp;
        mymap[idx] = amp;
        cout<<"mymap[idx] = "<<mymap[idx];
        mymap[(-1)*idx] = amp;
        cout<<"mymap[-idx] = "<<mymap[-idx];

    }

    for(int i = abs(start_idx); i <=  abs(idx); i++)
        cout<<(mymap[i] + mymap[(-1)*i])/2<<" " ;
    cout<<endl;


    //***********************************************************


    double x[100] ;
    mem(x,0);
    int i = 0;
    while(cin.peek() != '\n')
        cin>>x[i++];

    int strt;
    cout<<"Enter stating point of signal :";
    cin>>strt;
    double* x_start = &x[strt];
    int x_size = sizeof(x)/sizeof(x[0]);
    double xf[x_size];

    rep(i,x_size)
    {
        xf[i] = x[x_size - i];
    }

    //cout<<x_size - strt - 1<<endl;
    double* xf_strt = &xf[x_size - strt - 1];
    int xf_start = x_size - strt - 1;

    int shifting_time = xf_start - strt;
    shift(x,shifting_time);

    rep(i,x_size+shifting_time)
    cout<<x[i]<<" ";
    return 0;


    setprecision(1);

    if(xf_strt[-4] == 0)
        cout<<"yeah NULL";
    else
         cout<<xf_strt[-4]<<endl;
    return 0;
    //even and odd components
    for(int i = -4; i<=4; i++)
    {
        if(x_start[i] && xf_strt[i])
        {
            cout<<(x_start[i] + xf_strt[i])/2<<" ";
        }
        else if(x_start[i])
            cout<< (x_start[i]/2)<<" ";
        else if(xf_strt[i])
            cout<<(xf_strt[i]/2)<<" ";
        else
                cout<<0<<" ";
    }
    */
}

