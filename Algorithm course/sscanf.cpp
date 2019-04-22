#include<bits/stdc++.h>

using namespace std;



    class timer{
    clock_t start;

public:


    timer ()
    {
        start =clock();
        for(int i=1;i<=10;i++)
            for(int j=1;j<=10;j++)
            cout<<"\n\t\t what a time"<<endl;
    }
    ~timer()
    {
        clock_t end;
        end=clock();

        cout<<"\n\n\tElapsed Time:"<<end-start/CLOCKS_PER_SEC<<"\n";
    }
    };


    int main()
    {

        timer ob;

        cout<<"\n\tPress a key followed by ENTER::";
        char c;
        cin>>c;


        return 0;
    }





