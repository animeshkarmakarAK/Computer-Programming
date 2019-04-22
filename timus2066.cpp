#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int a,b,c,m_in;
    vector<int>v;
    cin>>a;
    cin>>b;
    cin>>c;

                v.push_back(a*b+c);
                v.push_back(a+b*c);
                v.push_back(a*b-c);
                v.push_back(a+b-c);
                v.push_back(a-b+c);
                v.push_back(a-b*c);

                  m_in=v[0];
                  for(int i=0;i!=v.size();i++)
                  {

                     if(m_in>v[i])
                     {
                         m_in=v[i];
                     }
                  }

                  cout<<m_in<<endl;

                  return 0;
}
