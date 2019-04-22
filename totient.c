#include<stdio.h>

#define scan(n) scanf("%d",&n);


int phi(int n)
{
    int result = n; // Initialize result as n

    // Consider all prime factors of n and subtract their
    // multiples from result
    int p;

    for ( p = 2; p * p <= n; ++p) {

        // Check if p is a prime factor.
        if (n % p == 0) {

            // If yes, then update n and result
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }

    // If n has a prime factor greater than sqrt(n)
    // (There can be at-most one such prime factor)
    if (n > 1)
        result -= result / n;
    return result;
}


int main()
{

    int t;
    scan(t);
    int cse = 1;

    while(t--){
    int a,b;
    scanf("%d%d",&a ,&b);
    int n = 0, score = 0;
    int i ;
    for( i = a; i<=b; i++)
    {
        n = phi(i);
        score += n*n;
    }

    printf("Case %d: %d",cse++,score);
    }

    return 0;
}
