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
int p[MAX];
vi v;
vector<char>per;
char ch[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int N,K ,counter;
 int gen()
 {
     if(counter == K)
        return 0;
     if(per.size() == N)
        {
            rep(j,N)
            cout<<per[j];
            cout<<endl;
            counter++;
            //cout<<counter<<endl;
        }
     else
        {
            repp(i,1,N){
            if(p[i])
                continue;
            p[i] = 1;
            per.pb(toupper(ch[i-1]));
            gen();
            p[i] = 0;
            per.pop_back();
        }
        }
 }
int main()
{
    int t,cases = 1;
    cin>>t;

    while(t--){
    mem(p,0);
    counter = 0;
    cin>>N>>K;
    printf("Case %d:\n",cases++);
    gen();
    }
}
