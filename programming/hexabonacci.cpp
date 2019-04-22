#include <stdio.h>
#include <iostream>
using namespace std;
long long t;
long long a;
long long b;
long long c;
long long d;
long long e;
long long f;
long long n;
long long x[10005];

int fn( int n ) {
	for (int i = 0; i <= n; i++) {

    	if( i == 0 ) {
			x[i] = a;
			continue;
		}
	    if( i == 1 ) {
			x[i] = b;
			continue;
		}
    	if( i == 2 ) {
			x[i] = c;
			continue;
		}
	    if( i == 3 ) {
			x[i] = d;
			continue;
		}
    	if( i == 4 ) {
			x[i] = e;
			continue;
		}
	    if( i == 5 ) {
			x[i] = f;
			continue;
		}
    	x[i] = x[i-1] + x[i-2] + x[i-3] + x[i-4] + x[i-5] + x[i-6];
		x[i] = x[i] % 10000007;

	}

	return x[n];
}

int main()
{


	long long ans;


	cin >> t;

	for (long long i = 1; i <= t; i++) {
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;
		cin >> e;
		cin >> f;
		cin >> n;

		ans = fn(n);
		ans = ans % 10000007;

		cout << "Case "<< i <<": "<< ans << endl;
	}


}


/*int arr[10000];
//unsigned int a, b, c, d, e, f;
unsigned int fn( int n ) {
    //if( n == 0 ) return a;
    //if( n == 1 ) return b;
    //if( n == 2 ) return c;
    //if( n == 3 ) return d;
    //if( n == 4 ) return e;
    //if( n == 5 ) return f;
    if(n>=0 && n<=5)
        return arr[n];
    if(arr[n]!=-1)
        return arr[n];
    else{
    arr[n] = ( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
    arr[n] = arr[n]% 10000007;
    return arr[n];
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(false);
    memset(arr,-1,sizeof(arr));
   int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
       for(int i =0;i<=5;++i)
        cin>>arr[i];
       cin>>n;
        printf("Case %d: %u\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}*/
