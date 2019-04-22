#include<bits/stdc++.h>

using namespace std;

#define warn "Ignored"

stack<string>s1;
stack<string>s2;
string cp;
bool load = false;

void init()
{
    cp = "http://www.lightoj.com/";
    while(!s1.empty())
        s1.pop();

      while(!s2.empty())
        s2.pop();
}

string visit(string w)
{
     if(load == false){
        s1.push(cp);
     load = true;
     }

   s1.push(w);
   // clear forward stack
   while(!s2.empty())
    s2.pop();

   return s1.top();
}

string le()
{
    if(s1.empty()){
        return warn;
        }
    else{
       /* s2.push(s1.top());
        s1.pop();
        if(s1.empty())
            return warn;
        else
        return s1.top();*/

        string tmp = s1.top();
        s1.pop();
        if(s1.empty()){
            s1.push(tmp);
            return warn;
        }else{
            s2.push(tmp);
            return s1.top();
        }
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

     string command;
     string result;

     int t;
     cin>>t;
     int testcase = 1;
     while(t--){
     load = false;
      init();
     //cout<<"Case "<<testcase++<<": "<<endl;
      printf("Case %d: ",testcase++);
     int line = 0;
    while(1)
    {
        cin>>command;
        line++;
        if(command == "VISIT")
        {
            string url;
            url.resize(50);
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
        else if(command == "QUIT" || line >= 100)
            break;
    }
}

return 0;
}


