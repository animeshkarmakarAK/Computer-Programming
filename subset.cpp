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
#define MAX 100

const int n = 4;
vector<int>v;
void subset(int k)
{
  // cout<<k<<endl;
    if(k < n+1){
        subset(k+1);
        v.pb(k);
        subset(k+1);
        //v.pop_back();
    }
    else
        return ;
}

void gen(int n)
{
   rep(k,(1<<n)) // SHIFTING ONE n TIMES THAT'S MEAN IN n PLACE THERE IS A ONE , SO 2^n
   {
       vector<int>v;
       rep(j,n){
       if(k& (1<<j))
        v.pb(j+1);
          }

          rep(i,v.size())
          cout<<v[i]<<"\t";
          cout<<endl;

          v.clear();
   }
}
void perm (int n)
{
    rep(i,n)
    v.pb(i+1);



   while(next_permutation(v.begin(),v.end())){
   rep(k,n)
   cout<<v[k];
   }

}
int main()
{
    subset(1); //THIS IS NOT WORKING
   vector<int>::iterator it;
   for(it = v.begin(); it!= v.end(); ++it)
    cout<<*it<<"\t";
   cout<<endl;

   // no of element in a set
   int n;
   cin>>n;
// function to generate subset
   gen(n);

   // permutation generating
   //perm(n);

    return 0;
}
