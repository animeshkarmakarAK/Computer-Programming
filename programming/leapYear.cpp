#include<bits/stdc++.h>

using namespace std;

void leap(int y)
{
    if(y%4==0){
        if(y%100){
            if(y%400){
            cout<<"leap year"<<endl;
            if(y%55)
                cout<<"huluculu"<<endl;
            }else {
                cout<<"is not a leap year"<<endl;
                 if(y%15)
                cout<<"buluculu"<<endl;
            }
        }else{
            cout<<"leap year"<<endl;
             if(y%55)
                cout<<"huluculu"<<endl;
        }
    }
      else{
            cout<<"is not a leap year"<<endl;
             if(y%15)
                cout<<"buluculu"<<endl;
      }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(false);

    int y;
    while(scanf("%d",&y)!=EOF){
        leap(y);
    }
}
