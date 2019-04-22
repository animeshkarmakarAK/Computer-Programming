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

bool overflow_check(int val,int n , int pos)
{
if(val < (1<<31)-1) return true;
else if(val == (1<<31)-1){
    if(n > pos)
        return false;
    else
        return true;
}
else
    return false;
}

bool overflow_check1(int val,int n , int pos)
{
if(val > -(1<<31)) return true;
else if(val == -(1<<31)){
    if(n-1 > pos)
        return false;
    else
        return true;
}
else
    return false;
}

int aatoi(string s)
{
    int n = s.size()-1;
    int val = 0;
    int pos = 0;
    bool neg = false;

    if(s[n] == '-')
        neg = true;
    if(!neg){
    for(int i = n; i >= 0; i--)
    {
        int tmp = s[i] - 48;
        if(tmp >= 0 && tmp <= 9){
        val += tmp * pow(10,pos);
        pos++;
        if(!overflow_check(val,n,pos))
        return (1<<31)-1;
        }
        else{
            return val;
        }
    }
    }
    else{
        for(int i = n-1; i >= 0; i--)
    {
        int tmp = s[i] - 48;
        if(tmp >= 0 && tmp <= 9){
        val -= tmp * pow(10,pos);
        pos++;
        if(!overflow_check1(val,n,pos))
        return -(1<<31);
        }
        else{
            return val;
        }
    }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout<<INT_MIN<<endl;
    int a;
    cin>>a;
    int b =a;
    a += 1;
    if(a-1 == b)
        cout<<"nothing"<<endl;
    else cout<<"overflow"<<endl;

    return 0;

    string s;
    cin>>s;
    aatoi(s);

   return 0;

}

