#include<bits/stdc++.h>

using namespace std;


float  khuchra(float n , float a[],int i)
{

if(n > 0)
cout<<a[i]<<endl;

    if((n <= 0) && (i == 11))
        return a[i];

    if(n <= 0){
            n += a[i];
            ++i;
    }

    khuchra(n - a[i],a,i);
   // cout<<"possible"<<a[i]<<endl;
    //cout<<coin<<endl;
   /* else{
        ++i;
        khuchra(n , a , i);
    }*/
}

float solve (float n , float a[] , int k , int i)
{
   // for(int i = 0; i <= k; ++i){
        if(n - a[i] > 0){
                cout<<"coin = "<< a[i]<<endl;
            solve(n - a[i],a,k ,i);
       // }
    }
    else if(i <= k){
        n = n + a[i];
    ++i;
    solve(n - a[i],a,k,i );
    }
    else
        return 0;
}

int main()
{
    float a = 333;
    float b = 444;
    cout<< a - b<<endl;
    float coin[] = {100,50,20,10,5,2,1,0.50,0.25,0.10,0.05,0.01};
    int lenght = sizeof(coin)/sizeof(coin[0]);
    cout<<lenght<<endl;

    float n;
    cin>>n;
    int i = 0;
    khuchra(n,coin,i);
    //solve(n,coin,lenght,0);
}
