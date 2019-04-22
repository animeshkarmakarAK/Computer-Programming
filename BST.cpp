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

string shortestPalindrome(string s) {
        int n = s.size()-1;
        string ss;

        int i = 0;
        int j = n;

        while(i < j)
        {
            if(s[i] != s[j])
            {
                ss += s[j];
                cout<<ss<<endl;
            }
            ++i;
            ++j;
        }

        s += ss;
        return s;
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s = "aacecaaa";
    cout<<shortestPalindrome(s)<<endl;

    return 0;
}

