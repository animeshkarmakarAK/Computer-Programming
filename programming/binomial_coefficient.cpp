#include<bits/stdc++.h>
using namespace std;

//int arr[1000][1000];

/*int c(int n, int k){
if (k == 0 || k ==n)
    return 1;
   // if(arr[n][k])
     //   return arr[n][k];

    return c(n-1,k-1)+c(n,k-1);

}


int main()
{
    memset(arr,0,sizeof arr);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int k;
    cin>>n>>k;

    cout<<c(n,k);

}

// Returns value of Binomial Coefficient C(n, k)
int binomialCoeff(int n, int k)
{
  // Base Cases
  if (k==0 || k==n)
    return 1;
//memory ....
if(arr[n][k])
    return arr[n][k];
  // Recur
  else{
   arr[n][k] = binomialCoeff(n-1, k-1) + binomialCoeff(n-1, k);
   return arr[n][k];
  }
}

// Driver program to test above function
int main()
{
    memset(arr,0,sizeof(arr));
    int n,k;
    cin>>n>>k;
    //printf("Value of C(%d, %d) is %d ", n, k, binomialCoeff(n, k));
     cout<<binomialCoeff(n,k);
    return 0;
}*/

//int a, b, c, d, e, f;
long long arr[10000];
int fn( int n ) {
    /*if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;*/
    if(n>=0 && n<=5)
    return arr[n];
    if(arr[n]!=-1)
        return arr[n];
    else{
   arr[n] = ( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
    arr[n] = arr[n]%10000007;
     return arr[n];
    }
}
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(0);
    long long n;
     int caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        //scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        for(int i=0;i<=5;i++){
            cin>>arr[i];
        }
        cin>>n;

        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
