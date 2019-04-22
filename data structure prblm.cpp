#include<iostream>
#include<cstdio>

using namespace std;

struct student
{
   int result;
};

int main()
{
   struct ob[40][4] ;
   cout<<"HOW MANY STUDENT:"<<endl<<"..............."<<endl;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<4;j++)
        cin>>ob[i][j].result;
   }
}
