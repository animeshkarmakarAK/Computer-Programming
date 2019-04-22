#include<iostream>
#include<ctype.h>
#include<cstring>
#include<string>
#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>
#include<map>
#include<cstdlib>
#include<set>
#include<iterator>
#include<queue>
#include<stack>


using namespace std;


int main()
{
    int n;
    int matrix[100][100];
    cout<<"square size:";
    cin>>n;

    if(n%2==0)
    cout<<"This is a even no"<<endl;
    else{
            int  column=(n/2)+1 ;
            cout<<column;
            int row=1;
    for(int i=1;i<=n*n;i++)
    {
       matrix[row][column]=i;
       row-=1;
       column+=1;

       if(i%n==0)
       {
           row+=2;
           column-=1;

       }
        else

       {
            if(row==0 )
           row=row+n;

           else if(column>n)
       {
           column=column-n;

       }

       }

    }
    }

    cout<<"\n\n\t\t<MAGIC SQUARE>\n\n";

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<"\t"<<matrix[i][j];
        cout<<"\n";
    }
}
