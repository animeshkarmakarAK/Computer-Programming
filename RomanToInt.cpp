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
int romanToInt(string s) {
        char roman[] = {'I','V','X','L','C','D','M'};
        int in[] = {1,5,10,50,100,500,1000};
        int len = s.size() - 1;

        int num;
        int prev = 0;
        int res = 0;

        for(int i = 0; i<=len; i++)
        {
           switch(s[i])
           {
               case 'I':
                   num = 1;
                   break;
               case 'V' :
                   num = 5;
                   break;

               case 'X':
                   num = 10;
                   break;
               case 'L':
                   num = 50;
                   break;
               case 'C':
                   num = 100;
                   break;
               case 'D' :
                   num =500;
                   break;
               case 'M' :
                   num = 1000;
                   break;
           }
            if(res == 0){
                res = num;
            }
            else if(prev && prev < num){
                int n = num - 2*prev;
                res  += n;
            }
            else {
                res += num;
            }

            prev = num;


        }

        return res;

    }


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;
    cout<<romanToInt(s)<<endl;
    return 0;

}
