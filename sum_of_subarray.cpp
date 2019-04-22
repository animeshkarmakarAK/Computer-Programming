#include<bits/stdc++.h>

using namespace std;

int main(){

    int s = 0;
    int p = 0;

    int arr[] = {-1,2,3,2,1,3,5,-7,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0 ; i < n; i++){
        s = max(arr[i], s+arr[i]);
        cout<<"s = "<<s<<endl;
        p = max(p ,s );
    }

    cout<<p<<endl;

}
