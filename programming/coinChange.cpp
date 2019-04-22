#include<bits/stdc++.h>

using namespace std;

  long a,b,c,d,e,f;
  long arr[1000];
      int fn(int n){
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
//if(arr[n]!=-1) return arr[n];
    arr[n]= ( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
    arr[n] = arr[n]%10000007;
    return arr[n];
}
int main() {
     // memset(arr,-1,sizeof(arr));

    long n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%u %u %u %u %u %u %u", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %u: %u\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
