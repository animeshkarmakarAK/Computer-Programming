#include<bits/stdc++.h>

using namespace std;

int mul(int x,int p)
{

  if ((mul(x,2*p) || mul(x,3*p)|| mul(x,4*p)||mul(x,5*p)||mul(x,6*p)||mul(x,7*p)||mul(x,8*p)||mul(x,9*p))>2*x)
       return 1;
    else
        return 0;
}

int main()
{

    int x;
    cin>>x;
    mul(x,1);
}
