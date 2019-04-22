#include<bits/stdc++.h>

using namespace std;   //uncomplete

int coin[11] = {5,10,20,50,100,200,500,1000,2000,5000,10000};

int make(int n){

for(int i = 0; i< 11; ++i){
      int r;
    if(n == r)
        return 1;
    if (n<=r)
        r = coin[i] + make();

    return r;
}

}

int main()
{

    int n;
    cin>>n;

   cout<< make(n);
}
