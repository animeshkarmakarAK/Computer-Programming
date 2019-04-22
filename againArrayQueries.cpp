
#include<bits/stdc++.h>

using namespace std;

void query(long int a[],int p1,int p2,int n)
{
    int min_diff = 1000000;
    for(int i = p1;i<=p2; ++i){
      for(int j =p1;j<p2;j++)
      if(i!=j){
            if(abs(a[i]-a[j])<min_diff)
        min_diff = abs(a[i]-a[j]);
      }
    }

    cout<<min_diff<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(false);
    long int a[100000];
    int n,q;
    int t;
    cin>>t;
    int test_case = 0;
    while(t--){

    cin>>n>>q ;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    for(int i = 0;i<q;i++){
        int p0,p1;
        cin>>p0>>p1;
        query(a,p0,p1,n);
    }
     cout<<"Case "<<++test_case<<":"<<endl;
    }

    return 0;

}
