#include<bits/stdc++.h>

using namespace std;

int dp[100][100];
int max(int x, int y)
{
    return (x>y)?x:y;
}

int lps(char str[], int i , int j)
{
    if(dp[i][j]) return dp[i][j];
    if(i == j)
        return 1;
   else if(str[i] == str[j] && i+1 == j)
        return 2;
   else if(str[i] == str[j]){
        cout<<i<<" "<<j<<endl;
        return lps(str,i+1,j-1) + 2;
   }

    else{
        return max(lps(str,i+1,j),lps(str,i,j-1));
        //return dp[i][i];
       }

}

//driver function
int main()
{
    memset(dp,0,sizeof(dp));
    char str[] ="abab";
    int len = strlen(str);
    cout<<lps(str,0,len-1);

    return 0;
}
