#include<bits/stdc++.h>

using namespace std;

int counter=0;

 int count_zero(unsigned long int m)
 {
     unsigned long int rem;
     //int div;
     if(m==0)
                ++counter;
     while(m!=0){
            //int temp=m;
            cout<<"Running---"<<endl;
      rem=m%10;

      m=m/10;
     // cout<< "m="<<temp<<"div=" <<m <<"rem="<< rem<<endl;
      if(rem==0)
        ++counter;
      }


 }

int main()
{
   int t;
   cin>>t;
   int cas=0;
   while(t--){
    unsigned long int m,n;
    counter=0;
    cin>>m>>n;
    for(unsigned long int i=m;i<=n;++i)
    {
       // counter=0;
        count_zero(i);

    }

    cout<<"Case "<<++cas<<": "<<counter<<endl;
   }
}
