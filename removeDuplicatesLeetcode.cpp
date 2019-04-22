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

int nums[] = {1,1,1,1,2,2,2,2,3};
int rd()
{
        int n = sizeof(nums)/sizeof(nums[0])-1;
        int cnt = 0;
        rep(i,n)
        {
            if(nums[i] == nums[i+1])
                cnt++;
            else if(nums[i] != nums[i+1]){
               while(cnt > 1)
               {
                   cnt--;
                   repp(j,i,n)
                   {
                       nums[j-1] = nums[j];
                   }

               }
               cout<<cnt-1<<endl;
                i -= (cnt-1);
                n -= (cnt-1);
                cnt = 0;

            }
         }
        return n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n = rd();
    rep(i,n)
    cout<<nums[i]<<"\t";
    return 0;

    /*int arr[] = {0,0,1,1,1,2,2,3,4};
    set<int>s;

    int n = sizeof(arr)/sizeof(arr[0]);
    rep(i,n)
    s.insert(arr[i]);

    cout<<s.size()<<endl;

 set<int>::iterator it;
 int idx = 0;
 for(it = s.begin(); it != s.end();++it)
 {

     arr[idx++] = *it;
 }
 rep(i,s.size())
 cout<<arr[i]<<"\t";
 cout<<endl;
 */
}
