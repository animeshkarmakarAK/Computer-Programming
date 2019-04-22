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

int a[] = {1,2,3,0,0,0};
int b[] = {2,5,6};
int m = 3,n = 3;

void Merge()
{
   int i = 0,j = 0;
   while(i < m && j<n)
   {
       if(a[i] <= b[j])
       {
           cout<<i<<endl;
           i++;
       }
       else{
        int idx = i;
        for(int k = m-1; k >= i;k--){
            a[k+1] = a[k];
        }
        a[i] = b[j];
        j++;
        i++;
       }
   }

   if(j<n-1)
   {

       while(j != n-1)
       {
           a[i++] = b[j++];
       }
   }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    Merge();
    int s = sizeof(a)/sizeof(a[0]);
    cout<<s<<endl;
    rep(i,s)
    cout<<a[i]<<"\t";
    return 0;
}

