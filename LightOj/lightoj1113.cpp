#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repp(i,k,n) for(int i = k; i<=(int)n; i++)
#define pb(x) push_back(x)
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
#define pmp make_pair
#define uu first
#define vv second
using namespace std;
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
typedef vector<int> vi;
typedef vector<int,int>vii;
typedef vector<pii> vpi;

struct node{
char *url;
node *next ,*previous;
}*start,*last,*current;

void init()
{
    start = new node;
    start->url = "www.Lightoj.com/";
    start->next = NULL;
    start->previous = NULL;
    current = start;
    cout<<"at  --- "<<current->url<<endl;
}

void visit(char *url)
{
 node *newnode = new node;
 newnode->url = url;
 newnode->next = NULL;
 newnode->previous = current;
 current->next = newnode;
 current = newnode;
 cout<<"at  --- "<<current->url<<endl;
}

void back_()
{
    if(current->previous!=NULL)
    {
        current = current->previous;
        cout<<current->url<<endl;
    }
    else{
        cout<<"IGNORED"<<endl;
        current->previous = NULL;

        /*node *newnode = new node;
        newnode->url = "";
        newnode->next = current;
        newnode->previous = NULL;
        current->previous = newnode;
        current = newnode;*/
    }
}

void forward_()
{
    if(current->next != NULL)
    {
        current = current->next;
        cout<<current->url<<endl;
    }
    else
    {
        cout<<"Ignored"<<endl;
        current->next = NULL;
        //current= current->next;
        /*node *newnode = new node;
        newnode->url = "";
        newnode->next = NULL;
        newnode->previous = current;
        current->next = newnode;
        current = newnode;*/


    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    init();
    string input;
 while(cin>>input,input!="exit")
 {
     if(input == "visit")
     {
         cout<<"input url ==== "<<endl;
         char u[100];
         cin>>u;
         visit(u);
     }
     else if(input == "back")
        back_();
     else if(input == "forward")
        forward_();
 }
return 0;
}
