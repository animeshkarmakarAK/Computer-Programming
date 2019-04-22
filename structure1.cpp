#include<iostream>
#include<vector>
#include<cstring>
#include<cstdlib>
#include<>
using namespace std;

    class data{
    public:
    char name[100];
    int height,weight;
    long long income;

public:

     bool compare(data a,data b)
     {
         if(a.income==b.income){
            if(a.height==b.height)
            {
                if(a.weight==b.weight)
                     return(strlen(a.name)<strlen (b.name));

                     else
                     return (a.weight<b.weight);

            }
            else return(a.height>b.height);

         }
         else return (a.income>b.income);


     }
    };


int main(void)
{

    vector<data>v;

    data ob1,ob2;
     cout<<"1 no polar name:";
    cin>>ob1.name;
    cout<<"\n1 no polar height:";
      cin>>ob1.height;
      cout<<"\n 1 no polar weight:";
        cin>>ob1.weight;
           cout<<"\n 1 no polar income:";
           cin>>ob1.income;


              cout<<"\n\n\n 2 no polar name:";
             cin>>ob2.name;

                   cout<<"\n 2 no polar height:";
      cin>>ob2.height;
            cout<<"\n 2 no polar weight:";
        cin>>ob2.weight;
              cout<<"\n 2 no polar income:";
           cin>>ob2.income;


           bool compare(data ob1,data ob2);

            v.push_back(ob1);
            v.push_back(ob2);

            sort(v.begin(),v.end(),compare);







}
