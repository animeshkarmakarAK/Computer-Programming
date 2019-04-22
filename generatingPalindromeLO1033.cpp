#include<bits/stdc++.h>

using namespace std;
#define SIZE 100

string a;
int memo[SIZE][SIZE];

int solve(int i , int j){

if(i>j)
    return 0;
    if(memo[i][j] != -1)
        return memo[i][j];
 if(a[i] == a[j])
    memo[i][j] = solve(i+1,j-1);
 else memo[i][j] = 1+min(solve(i+1,j),solve(i,j-1));

 return memo[i][j];

}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(0);
    int t , counter_case = 0;
    cin>>t;

    while(t--){
        ++counter_case;
        memset(memo , -1, sizeof(memo));
        cin>>a;

       cout<<"Case "<<counter_case<<": "<<solve(0,a.size()-1)<<endl;

    }
}

