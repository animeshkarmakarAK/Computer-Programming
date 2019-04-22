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

    int lengthOfLongestSubstring(string s) {
        map<char,int>mymap;
        map<char,int>::iterator itr;

        int n = s.size()-1;
        int max_sub = 0,count = 0;
        rep(i,n)
        {
            if(!mymap[s[i]])
            {
                mymap[s[i]] = int(s[i]);
                count++;
            }
            else{
                max_sub = max(max_sub,count);
                //cout<<count<<endl;
                count = 0;
                for(itr = mymap.begin();itr!=mymap.end();++itr)
                    cout << itr->first ;

                   mymap.clear();
                   mymap[s[i]] = int(s[i]);
                   count++;
            }
            cout<<endl;
        }
        return max_sub;

    }

    int main()
    {
        /*map<char,int>m;
        m['c'] = 1;
        m['b'] = 2;
        m.clear();
        m['b'] = 3;
        map<char,int>::iterator itr;
        for(itr = m.begin(); itr!=m.end();++itr)
            cout<<itr->first<<itr->second;
        return 0;*/
        string a;
        cin>>a;
        cout<<lengthOfLongestSubstring(a)<<endl;
        return 0;
    }
