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
string longestCommonPrefix(vector<string>&str)
{

    string prefix = "";
    for(int idx = 0; str.size()>0; prefix += str[0][idx],idx++)
        for(int i = 0; i<str.size(); i++)
            if(idx > str[i].size() ||(i>0 && str[i][idx] != str[i-1][idx]))
                return prefix;
        return prefix;
}

int ternarySearch(int arr[], int l , int r,int key)
{


    while(r>=l){
    int mid1 = l + r-l/3;
    int mid2 = r - r-l/3;

    if(arr[mid1] == key)
        return mid1;
    if(arr[mid2] == key)
        return mid2;

    if(arr[mid1] > key)
    {
        r = mid1 -1 ;
    }
    else if(key > arr[mid2])
    {
        l = mid2 + 1;
    }
    else{
        l = mid1+1;
        r = mid2 - 1;
    }


    }
    return -1;

}


int overflowCheck(int *result , int a, int b)
{
    if(a > INT_MAX - b)
        return -1;
    else *result = a+b;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    //int *res = (int*)malloc(sizeof(int));
    int *res  = new int;
  int a = 21474;
  int b = 10;

  printf("%d", overflowCheck(res, a, b));
  printf("\n %d", *res);

    return 0;

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    cout<<endl;
    cout<<ternarySearch(arr,0,n-1,key)<<endl;

return 0;
}

