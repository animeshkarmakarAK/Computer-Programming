#include<bits/stdc++.h>

using namespace std;


int  distinctCount(string a){

bool apper = false;
int counter = 0;
for(int i = 0; i<a.size();++i)

{
    apper = false;
    for(int j = i+1; j<a.size();j++){
        if(a[i]==a[j])
            apper = true;
    }

    if(apper == false)
        counter++;
}

return counter;


}

int palindrome(string a){
    bool pal=false;
    int counter = 0;

for(int i=3;i<=a.size();i+=2){
       pal = false;
       for(int j = 0;j<i;j+=2){
            if(a[i-1]==a[j])
                pal = true;
       }
       if(pal== true)
         ++counter;
}

return counter;

}



int main()
{
    int n;
    cin>>n;

    while(n--){
        string a ;
        cin>>a;

       int counter = distinctCount(a);
       cout<<counter<<endl;

      int palCount = palindrome(a);

      cout<<"The string "<<a<<" contains "<<palCount+counter<<" palimdromes"<<endl ;
    }
}
