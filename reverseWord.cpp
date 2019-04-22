#include<bits/stdc++.h>

using namespace std;

int main()
{
 vector<string>s;

 s.push_back("animesh");
 s.push_back("karmakar");

 cout<<s[1]<<endl;

 string a ;
 getline(cin,a);

 string :: reverse_iterator it;

 string b;
for(int i = a.size(); i>=0; --i){
    if(a[i] == ' ')
        s.push_back(b);
    else
        b = b+a[i];
}

cout<<b<<endl;

}
