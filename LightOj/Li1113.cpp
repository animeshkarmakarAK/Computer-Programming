#include<bits/stdc++.h>

using namespace std;

#define warn "Ignored"

stack<string>s1;
stack<string>s2;
string cp = "LIGHTOJ";


string visit(string w)
{
    s1.push(cp);
    cp = w;
    return cp;
}

string le()
{
    if(s1.empty())
        return warn;
       // cout<<"Ignored"<<endl;
    else{
        s2.push(s1.top());
        s1.pop();

        cp = s1.top();
        return cp;
    }
}

string right()
{
    if(s2.empty())
        return warn;
    else{
        s1.push(s2.top());
        s2.pop();

        return s1.top();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a = "http://www.lightoj.com/";
      //init(a);
     string command;
     string result;

     int t;
     cin>>t;
     int testcase = 1;
     while(t--){

     cout<<"Case "<<testcase++<<": "<<endl;
    while(1)
    {
       cin>>command;
        if(command == "VISIT")
        {
            string url;
            cin>>url;
            result = visit(url);
            cout<<result<<endl;
        }
        else if (command == "FORWARD")
        {
           result = right();
           cout<<result<<endl;
        }
        else if (command == "BACK")
        {
             result = le();
             cout<<result<<endl;
        }
        else if(command == "QUIT")
            break;
    }
}

return 0;
}


