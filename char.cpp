#include<cstdlib>
#include<iostream>
#include<vector>
#include<string>
#include<conio.h>
#include<ctype.h>

using namespace std;
/*
int main(void)
{
    int calc;
    string a;
    vector<string>v;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {

        if(a[i]==isdigit())
        {
            v.push_back(a[i]);
        }
        if(a[i]=='+')
        {
            v[i-2]=a[i-2]+a[i-1];
        }


          if(a[i]=='-')
        {
           v[i-2]=a[i-2]-a[i-1];
        }
          if(a[i]=='/')
        {
            v[i-2]=(a[i-2]/a[i-1]);
        }


          if(a[i]=='*')
        {
             v[i-2]=a[i-2]*a[i-1];
        }



    }

    cout<<v[0];


}*/




int main()
{
    for(int i=0;i<=122;i++)
    {
        cout<<i<<"=   "<<char(i)<<endl;

    }
    char *s;
    int i=0;
    do{
        cin>>s[i];
        //cout<<"s[ "<<i<<" ] ="<<s[i]<<endl;
       i=i+1;
    }while(i<5);



 i=0;
   do{

        cout<<"s[ "<<i<<" ] ="<<s[i]<<endl;
       i=i+1;
    }while(i<5);



}
