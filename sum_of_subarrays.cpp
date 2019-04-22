#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repp(i,k,n) for(int i = k; i<=(int)n; i++)
#define for3(i,n) for(int i = n; i>=0; --i)
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

int sum_sub(int *s, int *e, int a[],int x)
{
    int sum = *s + *e;
    cout<<sum<<*s<<*e<<endl;
    if(sum == x)
        return 1;
     if(*s == 0)
            return 0;
    if(sum<x)
        sum_sub(s,e++,a,x);
    if(sum>x)
        sum_sub(s++,e,a,x);

       /* while(*s != 0)
        {
             int sum = *s + *e ;
            if(s == 0)
                return 0;
            if(sum == x)
                return 1;

            if(sum + *(e+1) > x)
                s++;
             if(sum + *(e+1) < x)
                e++;

            /*cout<<sum<<endl;
            if (sum == x){
              cout<<s - &a[0]<<"->"<<e - &a[0]<<endl;
                return 1;
            }
            else if(sum < x)
                e++;
            else if(sum > x)
                s++;
        }
        */


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {4,2,6,0};
    int *p = &arr[0];
    p++;
    cout<<p<<endl<<*p<<endl;

    //return 0;

    /*int n;
    cin>>n;
    int a[n+1];
    rep(i,n)
    cin>>a[i];
*/
int a[] = {1,3,2,5,1,1,2,3};
    int *start_p = &a[0];
    int *end_p = &a[1];

    cout<<endl<<++start_p<<endl;
    int x = 8;
    int r = sum_sub(start_p,end_p,a,x);
    cout<<r<<endl;

    return 0;

}
