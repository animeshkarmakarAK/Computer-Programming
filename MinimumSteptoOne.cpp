#include<bits/stdc++.h>

using namespace std;

#define MAX 100000

int memo[MAX];

int getMinStep(int n){


if(n == 1)
    return 0;

   else  if(memo[n] != -1)
        return memo[n];

  int r = 1 + getMinStep( n - 1 );
    // '-1' step .  'r' will contain the optimal answer finally
    //cout<<r<<endl;

    if( n%2 == 0 )   r  =  min( r , 1 + getMinStep( n / 2 ) ) ;
   // cout<<"start another one "<<endl;
    //  '/2' step
    if( n%3 == 0 )   r  =  min( r , 1 + getMinStep( n / 3 ) ) ;


        memo[n] = r;   //Memorization
        //cout<<r<<endl;

        return r;


}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(0);

    memset(memo, -1 , sizeof(memo));
    int n ;
    cin>>n;

    int r = getMinStep(n);
    cout<<"The minimum step of "<<n<<" is "<<r<<endl;

}
