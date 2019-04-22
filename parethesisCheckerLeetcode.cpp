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

 vi v;
 bool sorted(vector<int> v) {
    for(int i = 0; i < v.size()-1; i++)
        if(v[i] > v[i+1])
            return false;
    return true;
}

    bool pal(vector<int>v)
    {
        int n = v.size() - 1;
        int i = 0;
        while(i<=n)
        {
            if(v[i] != v[n])
                return false;
            ++i;
            --n;

        }
        return true;
    }
    bool isValid(string s) {
        bool f ,ss ,t = false;
        for (int i = 0; i<s.size(); i++)
        {
            switch(s[i]){

                case '(':v.push_back(1) ;
                 f = true;
                    break;
                case ')':v.push_back(1);
                f = false;
                    break;
                case '{':v.push_back(3);
                ss = true;
                    break;
                case '}':v.push_back(3);
                ss= false;
                    break;
                case '[':v.push_back(2);
                t = true;
                    break;
                case ']': v.push_back(2);
                t= false;
                    break;

            }
        }
        //cout<<sorted(v)<<pal(v)<<f<<ss<<t<<endl;

            if((sorted(v) || pal(v)) && (f==false && ss == false && t==false))
            {
                return true;

            }
            else return false;
    }

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

       string s;
        while(cin>>s, s != "e")
        cout<<isValid(s)<<endl;
    }

