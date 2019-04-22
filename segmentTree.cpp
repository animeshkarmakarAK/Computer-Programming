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

int tree[MAX];

int sum(int a, int b,int n)
{
    a += n;
    b += n;
    cout<<a<<b<<endl;
    int s = 0;
    while(a<=b)
    {
        if(a%2 == 1)
            s += tree[a++];
        if(b%2 ==0)
            s += tree[b--];

            a/=2;
            b/=2;
    }
    return s;
}

void CreateTree(int arr[],int n)
{
 repp(i,1,n)
 tree[i+n-1] = arr[i];

 for(int i = n-1; i>=1; i--)
 {
     tree[i] = tree[2*i] + tree[2*i+1];
 }
}

int main()
{
    mem(tree,0);
    int arr[MAX];
    cout<<"Number of elements"<<endl;
    int n;
    cin>>n;
    repp(i,1,n)
    cin>>arr[i];
    CreateTree(arr,n);
    repp(i,1,2*n-1)
    cout<<tree[i]<<"\t";

    int a ,b;
    cin>>a>>b;
    cout<<sum(a,b,n)<<endl;
}
