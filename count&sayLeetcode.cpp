
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

string countAndsay(int n)
{
    if(n == 1) return "1";
    if(n ==2) return "11";

    string gen = "11";

   // cout<<gen<<endl;

    repp(i,3,n)
    {
          gen += "$";
      string tmp = "";
      int cnt = 1;

      rep(k,gen.size()-1)
      {
          if(gen[k] == gen[k+1])
            cnt++;

          else{
            ostringstream ss;
            ss<<cnt;
            tmp += ss.str();
            tmp += gen[k];
            cnt = 1;
          }
          //cout<<tmp<<endl;
      }
      gen = tmp;

    }
    return gen;

}

int main()
{

int n;
cin>>n;
cout<<countAndsay(n)<<endl;
return 0;
}
