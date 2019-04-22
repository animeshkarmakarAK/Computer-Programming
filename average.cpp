#include<iostream>

using namespace std;

int main()
{
    int n,t=0;
    cout<<"How many no:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        t=t+i;
    }
    cout<<"average="<<t/n<<endl;
}
