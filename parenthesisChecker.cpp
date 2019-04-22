#include <bits/stdc++.h>

using namespace std;

// THIS PROGRAM IS CORRECT DONT PANIC
// it's a geekofgeeks problem solution
/*int main() {
	int t;
	cin>>t;

	while(t--){
	    string a;
	    cin>>a;

	   int c1 = 0,c2 = 0, c3 = 0;

	    for(int i = 0; i< a.size(); ++i){
	        if (a[i] == '('){
	           ++c1;

	        }

	         if(a[i] == '{')
	         ++c2;

	         if(a[i] == '[')
	       ++c3;

	          if (a[i] == ')'){
	           --c1;


	          }

	         if(a[i] == '}')
	          --c2;

	         if(a[i] == ']')
	           --c3;

	    }

	    if(c1 == 0 && c2 == 0 && c3 == 0)
	     cout<<"balanced"<<endl;
	     else
	     cout<<"not balanced"<<endl;
	}
	return 0;
}*/

// THIS IS A PROBLEM BASED ON STRING REVERSING IN GEEKSOFGEEK .. easy problem level
/*int main(){
 int t;
 cin>> t;

 stack<string>ss;
 while(t--){

    string a;
    cin>>a;

    string tmp;

    for(int i = 0 ; i<a.size(); ++i){


        if(a[i] == '.'){

            ss.push(tmp);
            ss.push(".");
            tmp.clear();

            }
            else{
                tmp.push_back(a[i]);
                }

    }
    ss.push(tmp);

 while(!ss.empty()){
    cout<<ss.top();
    ss.pop();
 }
 cout<<endl;
 }
}*/

// CONVRESION FROM STRING TO INTEGER VALUE
int main(){
 /* string  a = "123 ";
int x;
//sscanf(a , "%d",&x);
x = atoi(a.c_str());
cout<<x<<endl;*/

string a;


getline(cin,a);
int l = int (a[0]) - 48;
cout<<a[0]<<"="<<l<<"   "<< a.size();




}













