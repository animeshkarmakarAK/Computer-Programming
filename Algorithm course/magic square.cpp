#include<iostream>

using namespace std;

class magic
{
    int matrix[10][10];
    int n;

public:
    void get()
    {
        cin>>n;
    }

    void magiccal ()
    {
        int i=1;
        int j=n/2;
        for(int k=1;k<=n*n;k++)
        {
            matrix[i][j]=k;
            i--;
            j++;

            if(i%n==0)
            {
                i+=2;
                j--;
            }
            if(i==0)
                i=n;
            if(j>n)
                j=1;
        }

    }

    void display()
    {
        for(int k=1;k<=n;k++)

        {
            for(int j=1;j<=n;j++){
               cout<<matrix[k][j];
            }
            cout<<"\n";
        }
    }
};
int main()
{
    magic ob;
    ob.get();
    ob.magiccal();
    ob.display();

}
