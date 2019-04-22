#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repp(i,k,n) for(int i = k; i<=(int)n; i++)
#define for2(i,n) for(int i = 1; i<= int(n) ; i++)
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

int nums[] = {1,2,3};
vi v;
int n = 3;
int p[MAX];

void permute()
{
   // if(v.size() == n)
    //{
        //generate permute
        rep(j,v.size())
        cout<<v[j]<<"\t";
        cout<<endl;

//        counter++;
      //  return;
    //}
//    else
  //  {
         for2(i,n)
         {
             //cout<<i<<endl;
             if(p[i])
                continue;
             p[i] = 1;
             v.push_back(v[i]);
             //cout<<i<<endl;
             permute();
             //cout<<"return work:: i = "<<i<<endl;
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
    v.pb(1);
    v.pb(2);
    v.pb(3);

    permute();

    return 0;
}

