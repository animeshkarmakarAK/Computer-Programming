#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repp(i,k,n) for(int i = k; i<=(int)n; i++)
#define for2(i,n) for(int i = 1; i<= int(n) ; i++)
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

map<string , int >mymap;
vector<char>v;
vector< vector<char> >per;
char color[] = {'R','G','B'};
int p[3];
int n = sizeof(color)/sizeof(color[0]);
void permute()
{
    if(v.size() == n)
    {
       per.push_back(v);
        return;
    }
    else
    {
         for2(i,n)
         {
             if(p[i])
                continue;
             p[i] = 1;
             v.push_back(color[i-1]);
             permute();
             p[i] = 0;
             v.pop_back();
         }

    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    mem(p,0);
    string a;
    cin>>a;



    //8888 permutation

     permute();
  //88888

    int w_cnt = 0;
    int b_idx = 0;
    int b[100];
    rep(i,a.size())
    {
        if(a[i] == 'W')
            w_cnt++;
            b[b_idx++] = i;
    }

    int b_size = sizeof(b)/sizeof(b[0]);
    int idx1 = 0;
    int idx2 = 0;

    int cnt = 0;
    rep(k, pow(w_cnt,3)){
        string tmp = a;
    rep(i,b_size)
    {
        char c = per[idx1][idx2];
       if(a[b_size-1] != c && a[b_size+1] != c)
       {
           tmp[b_size] = c;
       }
       else{
        idx2++;
        if(idx1 > 2)
            idx1++;
       }
       if(!mymap[tmp]){
            cout<<tmp<<endl;
        mymap[tmp] = 1;
        cnt++;
       }
    }
    }
    cout<<cnt<<endl;
    return 0;
}
