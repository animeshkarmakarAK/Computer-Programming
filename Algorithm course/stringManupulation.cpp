#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
    bool found;
    int n;
    string a;
    string b="puton";
    string c="one";
    cin>>n;
    int i=0;
    while(i<n)
    {
        cin>>a;
        for(int j=1;a[j]!='\0';j++)
        {
            if(a[j]=='p')
            {
                if(!strcmp(a.substr(j,j+5),b){
                    found=true;
                    break;

                }
            }
           else if(a[j]=='o')
            {
                if(a.substr(j,j+3)=="one"){
                    found=true;
                    break;
                }
            }
            else
                found=false;
        }
        if(found==true)
            cout<<"yes"<<endl;
        else
            cout<<"No"<<endl;

            i++;
    }
}
