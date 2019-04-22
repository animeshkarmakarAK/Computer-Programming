#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[10];
    cin>>n;
    for(int k=1;k<=n;k++){
        cin>>a[k];
    }

        int i,j;

    for( i=1;i<=n;i++)
    {
        for( j=1;j<=n-i;j++)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }

    for(int i=1;i=n;i++){
        cout<<a[i];
    }
}
