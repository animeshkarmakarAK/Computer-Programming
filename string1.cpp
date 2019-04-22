#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<cstdlib>
#include<conio.h>
#include<cmath>

using namespace std;
/*int main(void)
{

    vector<string>st;
    string a,b,c;
    cin>>a;
    scanf("%[a-Az-Z]",&a);
    cout<<a;
    st.push_back(a);
    cin>>b;
    cout<<b;
    st.push_back(b);
     c= a+b ;
     st.push_back(c);
     cout<<"\n"<<c;




      cout<<"\n REVERSE STRING IS :";

      for(int i=st.size();i>=0;i--)
      {
          cout<<st[0][i];
      }








}

int main()
{
    string a;
    vector<string>st;
    cin>>a;
    st.push_back(a);


    cout<<st.size();

    for(int i=st.max_size();i>=0;i++)
    {
        cout<<st[0][i];
    }

}

//just checking
//..............


int main(void)
{
    int a;
    vector<int>v;
    if (kbhit())
    {
        v.push_back(a);
    }
    cin>>a;

   for(int i=0;i<5;i++)
    cout<<v.size();
})*/

int main()
{
    string a;
    cin>>a;
    int i=0,d;
    do{
        d=d+atoi(a.[0][i++])*pow(2,(strlen(a)--)-1);
    }while(i>=0);
}









