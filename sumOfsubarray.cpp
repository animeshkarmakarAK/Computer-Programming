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

int arr[] = {1,3,2,5,1,1,3,2};
/*int _sum(int *p1,int *p2)
{
    int sum = 0;
    repp(*i,p1,p2)
    sum += *i;

    return sum;
}
int main()
{
    int *p1 = &arr[0];
    int *p2 ;
    p2 = p1;
    cout<<*p2<<endl<<p1<<endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;

    //int sum = 0;
    while(1)
    {
        cout<<_sum(p1,p2)<<endl;
        if(p1 || p2 == &arr[n])
            break;

      if(_sum(p1,p2) == x){
        cout<<"found it "<<endl;
        break;
      }
      if(_sum(p1,p2) < x ){
        p1++;
        cout<<"p1 forward"<<endl;
      }

      if(_sum(p1,p2) > x){
       cout<<"p2 forward"<<endl;
        p2++;
      }
    }
    rep(i,n)
    cout<<arr[i]<<"\t";
    cout<<endl;
    cout<<"not found"<<endl;

    return 0;
}*/

int add(int i,int j)
{
    cout<<i<<j<<endl;
    cout<<arr[i]<<arr[j]<<endl;
    int s = 0;
    for(int  k = i; k<= j ; k++)
        s += arr[i];

    return s;
}
int main()
{
 int idx1 = 0;
 int idx2 = 1;
 int n = sizeof(arr)/sizeof(arr[0]);
 int x;
 cin>>x;

 while(idx2 != n)
     {
         int sum = add(idx1,idx2);
         cout<<"sum ="<<sum<<" "<<x<<endl;
         if((arr[idx1] || arr[idx2]) == x)
         {
             cout<<"found at "<<idx1<<"to "<<idx2<<endl;
             break;
         }
         if(sum == x){
                cout<<idx1<<idx2<<endl;
            break;
         }
        //int sum =  _sum(idx1,idx2+1);
        //cout<<idx1<<" " <<idx2<<endl;
        if(sum < x){
            idx2++;
            cout<<sum<<"forward idx2"<<endl;
        }
        if(sum > x){
             idx1++;
            cout<<sum<<"forward idx1"<<endl;
        }
     }
}









