#include<bits/stdc++.h>

#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repp(i,k,n) for(int i = k; i<=int(n);i++)
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

int a[] = {7,2,1,6,3,5,8};;

int partition(int a[],int start,int end)
{
    int pivot = a[end];
    //cout<<pivot<<endl;
    int  p_idx =  start;

    repp(k,start,end-1){
    if(pivot >= a[k])
    {
        swap(a[p_idx],a[k]);
        p_idx+= 1;
    }
    }
    swap(a[p_idx],a[end]);

    return p_idx;
}

void quicksort(int a[],int start,int end)
{
    if(start > end)
        return ;

    int idx = partition(a,start,end);
    cout<<idx<<endl;
    quicksort(a,start,idx-1);
    quicksort(a,idx+1,end);
}


int main()
{
    int n = sizeof(a)/sizeof(a[0]);
    quicksort(a,0,n-1);

    rep(i,n)
    cout<<a[i]<<"\t";
    cout<<endl;

    return 0;
}
