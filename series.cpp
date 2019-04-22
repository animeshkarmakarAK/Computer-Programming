# include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int sum=0,n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<i<<"+";
        sum+=i;
    }
    cout<<"="<<sum<<endl;
    sum=0;
    cout<<"For square"<<endl;

        for(int i=1;i<=n;i++)
    {
        cout<<i<<"^2+";
        sum+=pow(i,2);
    }



    return 0;
}
