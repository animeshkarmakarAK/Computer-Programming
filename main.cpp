#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>

/*#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define pi acos(-1.0)
#define N 1000
#define LL long long

#define For(i, a, b) for( int i = (a); i < (b); i++ )
#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Set(a, s) memset(a, s, sizeof (a))
#define Read(r) freopen(r, "r", stdin)
#define Write(w) freopen(w, "w", stdout)*/

using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k, n;
    int pure_nums, defaulter_num;

    while ( scanf ("%d %d", &n, &k) != EOF ) {
        pure_nums = (k - 1) * (k - 1);
        defaulter_num = k - 1;

        for ( int i = 3; i <= n; i++ ) {
            int tmp = pure_nums;
            pure_nums = pure_nums * (k - 1) + defaulter_num * (k - 1);
            defaulter_num = tmp;
        }

        printf ("%d\n", pure_nums + defaulter_num);
    }
#ifdef LOCAL_DEFINE
#endif

    return 0;
}
