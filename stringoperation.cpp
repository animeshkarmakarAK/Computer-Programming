#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>


using namespace std;

int main()
{
    vector<string>vs,result;

    string a;

    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>a;
        vs.push_back(a);

        for(int j=1;a[j]!='\0';j++)
        {
            if(a[j]=='>'){
                result.push_back("WIN");
              break;
            }
            if(a[j]=='|')
                {
                result.push_back("LOSE");
                break;
            }
        }
    }

    for(int i=0;i!=result.size();i++)
    {
        cout<<"\ncase "<<i+1<<": "<<result[i];
    }


}
