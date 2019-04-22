#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define rep(i,n) for(int i = 0; i<int(n);i++)



int main()
{
    ios_base::sync_with_stdio(false);

    int n;
    cin>>n;
    int x = 0;
   // char ch[100];
    string ch;
   rep(i,n)
    {
        cin>>ch;

        if(ch[0] == '+' || ch[2] == '+')
        x++;
        else x--;

    }
    cout<<x<<endl;
    return 0;

}
