#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repp(i,k,n) for(int i = k; i<=(int)n; i++)
#define for3(i,n) for(int i = n; i>=0; --i)
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

bool pal(int x)
{
    int div;
    int rem;
    vector<int>v;
    if(x == 0) return true;

    if(x < 0) return 0;
    else
    {
        do{
            rem = x%10;
            x/=10;
            v.push_back(rem);
        }while(x != 0);
    }

   int s = 0;
   int e = v.size()-1;

   while(s<=e){
    if(v[s] != v[e]) return 0;
    else {
        s++;
        e--;
    }
   }
   return 1;
}
int main()
{
   cout<< 2%10<<2/10;
    int x;
    cin>>x;
    cout<<pal(x)<<endl;
}
