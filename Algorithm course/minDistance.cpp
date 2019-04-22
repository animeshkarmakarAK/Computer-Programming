#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int x1,x2,x3;
    const int arr[5];
    cin>>t;

    while(t)
    {
        cin>>arr[1]>>arr[2]>>arr[3];
        for(int i=1;i<=3;++i){
                if(i==1){
            min_dist=min(min_dist,sqrt(sqr(arr[i]-arr[++i])+sqr(arr[i]-sqr(i+2))));

                }
                else
           min_dist=min(min_dist,sqrt((arr[i]-arr[])))
        }

    }
}
