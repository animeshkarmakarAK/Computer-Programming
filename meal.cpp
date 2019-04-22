#include<bits/stdc++.h>

using namespace std;

int main(){
 float bib = 192.38;
 float mealrate = 22.75;

 while(1){

 cout<<"MEALSONKHA: ";
 float n;
 cin>>n;
 cout<<endl;

cout<<"JOMA: ";
 float joma;
 cin>>joma;
 cout<<endl;



 float khoroch = n*mealrate + bib ;

 khoroch = ceil(khoroch);
 cout<<"KHOROCH :  "<<khoroch<<endl;

 if(khoroch>joma)
 cout<<"MANAGER PABE: "<< int(khoroch - joma)<<endl;
 else{
     cout<<"MANAGER DIBE: "<< int(joma - khoroch) <<endl;

}

cout<<"\n\n";
 }
}

