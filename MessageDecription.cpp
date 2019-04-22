#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repp(i,k,n) for(int i = k; i<=(int)n; i++)
#define si(n) scanf("%d",&n);
#define sc(n) scanf("%c",&n);
#define sl(n) scanf("%lld",&n);
#define print(n) printf("%d",n);
#define print_ll(n) printf("%lld",n);
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
typedef long long int ll;
#define MAX 100

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    /*cout<<int('o')<<endl;
    return 0;
    string c;
    cin>>c;
    c[2] = 65;
    rep(i,c.size())
    cout<<(c[i]);
    cout<<97%94<<endl;
    char ch ;
    ch = 97;
    cout<<ch<<endl;
    return 0;
    //ch = 'H' + 15;
    cout<<int('A')<<int('Z');
*/
/*string ch;
getline(cin,ch);
cout<<ch.size();
return 0;*/

/*cout<<1000000000000%26<<endl;
return 0;*/

    int n;
    ll s;
    cin>>n>>s;

    s = s%26;

    rep(idx,n+1){
        string a;
        getline(cin,a);
        int len = a.size();
        //cout<<len<<endl;

        rep(i,len)
        {
            if(a[i] >= 'a' && a[i] <= 'z')
            {
               int num = a[i] - s;
              // cout<<num<<endl;
               if(num < 97)
               {
                    num = 122 - 97%num +1 ;
                    //cout<<char(num)<<endl;
               }
                 cout<<char(num);

            }

           else if(a[i] >= 'A' && a[i] <= 'Z')
            {
               int num = a[i] - s;
               if(num < 65)
               {
                    num = 90 - 65%num -1 ;
               }
              // b[i]= char(num);
               //cout<<b[i];
               cout<<char(num);

            }
            else
                cout<<a[i];
        }
        cout<<endl;
    }

    return 0;
}

