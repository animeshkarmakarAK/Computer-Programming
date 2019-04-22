#include<bits/stdc++.h>

using namespace std;

string a;
string b;
int arr1[10][10];
int arr2[10][10];
int m,n;

int editString(){
      for(int i=0;i<=m;++i)
        arr1[0][i]=i;

      for(int i=0;i<=n;++i)
        arr1[i][0]=i;

      for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
            if(a[i-1]==b[j-1])
                arr1[i][j]=arr1[i-1][j-1];
            else
                arr1[i][j]=min(arr1[i][j-1],arr1[i-1][j],arr1[i-1][j-1]);
                arr1[i][j]++;
        }
      }

}

int main()
{
    int test;
    cin>>test;

    while(test--){
   cin>>a;
   cin>>b;
   m=a.size();
   n=b.size();

   editString();

    }
return 0;

}
