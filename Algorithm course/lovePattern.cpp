#include<iostream>

using namespace std;

int main()
{
    cout<<"No of rows:";
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {

        if(i==1){
            for(int k=1;k<=n+1;k++)
            {
                if (k==i+1 && k==n-i)
                    cout<<"*";
                else
                    cout<<" ";
            }
            cout<<"\n";
        }


    else if(i==2){
            for(int k=1;k<=n+1;k++)
            {
                if(k==i-1 && k==i+1 && k==n-i&&k==n)
                    cout<<"*";
                else
                    cout<<" ";
            }
            cout<<"\n";
    }
   else  if(i==3)
    {
        for(int k=1;k<=n+1;k++)
        {
            if(k==i-2 && k==n+1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";
    }

        }

    }


