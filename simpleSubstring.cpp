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

vector<int>edge[MAX];
int visited[MAX];

int main()
{
   string a ;
   string b;
   cin>>a>>b;

int lenA = a.length();
int lenB = b.length();

 if(lenB == 0)
    return -1;

 int idx;
 rep(i,lenA)
 {
     if(a[i] == b[0])
     {
         idx = i;
         cout<<idx+1<<endl;
         return 0;
     }
 }
 return -1;
}


