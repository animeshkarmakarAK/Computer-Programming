#include<iostream>

using namespace std;

int main()
{
    int s;
    cin>>s;
    for(int i=1;i<=3;i++)
    {
        s+=s+10;
        cout<<"s="<<s<<endl;
        if(s<=20)
        {
            s+=4;
                    cout<<"s="<<s<<endl;

        }
        if(s>20)
        {
            for(int i=0;i<=5;i++)
            {
                cout<<"yes"<<endl;
            }
            break;
        }
    }
}
