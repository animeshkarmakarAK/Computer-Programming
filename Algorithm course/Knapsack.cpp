
#include<bits/stdc++.h>

using namespace std;

int main()
{
 int  testcase;
    int value,n,in=1;
    bool a;
    int sum=0;
    int i;

    vector<int >v;
    scanf("%d" , &n);

     while( in<=n)
  {
      cin>>testcase;
      for( i=0;i<testcase;i++)
      {
          cin>>value;
          v.push_back(value);
      }
      for(int j=0;j<v.size();j++)
      {
          if(v[0]<1)
           a=false;

          else  if(v[j]<v[j-1])
            a=false;

          else  if(j>=2)
           {
               for(int k=i-1;k>=0;k--){
                sum+=v[k];
               }
               if(sum==v[i])
                a=false;
           }
           else
            a=true;

            in++;
      }
      if(a==true)
      {
          cout<<"A is a sequence"<<endl;
      }
  }
}
