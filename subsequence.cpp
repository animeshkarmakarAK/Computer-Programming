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
#define MAX 100

int counter = 0;
int i = 0;
map<string,int>map1;
map<string,int>map2;

void print_subs(string input, string output)
{
if(input.length() == 0)
    {
        if(output == " ")
          {
             cout<<"Nothing"<<endl;
          }
        else{
    if(map1[output]) counter += 1;
    else {map1[output] = i++;
    cout<<"map"<<map1[output]<<endl;}
    return ;
            }
    }
print_subs(input.substr(1),output);
print_subs(input.substr(1),output + input[0]);
}


int main()
{
    string a,b;
    cin>>a>>b;


    print_subs(a,"");
    print_subs(b,"");
    cout<<counter<<endl;

    return 0;
}
