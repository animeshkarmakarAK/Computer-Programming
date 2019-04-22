#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int n;
    int sum=0;
    int in=1;
   // vector<int>v,perfectNumber;
   // int a[50];
   cout<<"\n\tEnter Terminal No:";
   cin>>n;

   cout<<"\nPerfect Numbers from 1 to"<< n<<"are\n......."<<endl;

    for(int i=1;i<=n;i++)
    {
        sum=0;

        for(int j=1;j<i;j++)
        {
            if(i%j==0){
              sum=sum+j;
            }

        }
        if(sum==i)
            cout<<"\n\tperfectNo:"<<i;


}
}


