#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[100];
    int n;
    int i = 0;
    while(cin.peek() != '\n'){
        cin>>arr[i++];
    }
    cout<<i<<endl;
    int p = 0;
    int dec = 0;

    cout<<"arr"<<arr[i-1] - 48<<endl;

    while(i--)
    {
         dec += int(arr[i-1] -48) * pow(2,p);
         cout<<dec<<endl;
         p++;
    }

    cout<<dec<<endl;
    return 0;

}
