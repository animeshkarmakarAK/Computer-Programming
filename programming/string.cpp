#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i=10;

    string a;
    for(int i=0;i<10;i++)
    {
       char c= char(i+'a');
      // cout<<c;
       a.push_back(c);
    }
    cout<<a<<endl;
    printf("%s",a);
}

