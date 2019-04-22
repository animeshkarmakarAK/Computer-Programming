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

int arr[MAX];

void max_heapify(int i)
{
    int l = i<<1;
    cout<<" l = "<<l<<endl;
    int r = l + 1;
    int large;

  //  while(i >= 1)
    //{
        if(arr[l] && arr[l]>arr[i])
            large = l;
        else
            large = i;

        if(arr[r] && arr[r] > arr[large])
            large = r;

        if(large && large != i)
        {
            swap(arr[i],arr[large]);
            cout<<"large " <<large<<endl;
            max_heapify(large);
      //      i/=2;
        }
    //}
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //if(1%2 == 0) return 1;
    //else cout<<"n"<<endl;
    int n;
    cin>>n;
    //return 0;

    repp(i,1,n)
    cin>>arr[i];

   for(int i = n/2 ; i >= 1; --i)
     max_heapify(i);

        repp(i,1,n)
        cout<<arr[i]<<"\t";

    return 0;
}

