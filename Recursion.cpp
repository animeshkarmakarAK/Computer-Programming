#include<bits/stdc++.h>

using namespace std;


int prime(int n , int i){

if (i == 1)
  return 1;
 if( n%i != 0){
    prime(n,i-1);
}else
return 0;


}

int rr(int a[] , int n){

 if(n == 0){
         cout<<a[n]<<endl;
    return 0;

 }
 else {
         cout<<a[n]<<endl;
        rr(a,n-1);

 }


}

int main()
{

    int n;
   /* cin>>n;

    int a[n];
    for(int i = 0; i<n; ++i)
        cin>>a[i];

    rr(a,n-1); */

    cin>>n;
   int p = prime(n,sqrt(n));
   if(p == 1)
    cout<<n<<" is a prime number"<<endl;
   else
    cout<<n<<" is not a prime number"<<endl;
}
