#include<bits/stdc++.h>

using namespace std;

struct node{
string url;
struct node *next , *pre;
}*start = NULL,*current = NULL;

void initLoad(string a)
{
     if(start == NULL){
         struct node *tmp = new node;
        tmp->url = a;
        tmp->next = NULL;
        tmp->pre = NULL;
        start = tmp;
        current = start;
    }
}

string makeNode(string url)
{
    struct node *newnode = new node;
    newnode -> url = url;
    newnode -> pre = current;
    newnode ->next = NULL;
    current->next = newnode;
    current = newnode;
    return current->url;

}

string right()
{
    if(current->next == NULL){
        return "Ignored";

    }else{
        current = current->next;
        return current->url;
    }
}

string left()
{
    if(current->pre == NULL){
        return "Ignored";

    }else{
        current = current->pre;
        return current->url;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    initLoad("http://www.lightoj.com/");
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
            result = makeNode(url);
            cout<<result<<endl;
        }
        else if (command == "FORWARD")
        {
           result = right();
           cout<<result<<endl;
        }
        else if (command == "BACK")
        {
             result = left();
             cout<<result<<endl;
        }
        else if(command == "QUIT")
            break;
    }
}

return 0;
}

