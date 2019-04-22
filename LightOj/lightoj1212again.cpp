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
#define MAX 100

void display();
void pushLeft(int data);
void pushRight(int data);
void popLeft();
void popRight();
int cap ;

struct node
{
int value;
struct node *left,*right;
};
node *start,*rear;

int pushLeft(int data)
{
     node *newnode = new node ;
     newnode->value = data;
     newnode->left = NULL;
     newnode->right = NULL;

     if(start == NULL)
     {
         start  = new node;
         start = newnode;
         rear  = newnode;
         cout<<start->value<<endl;
     }
     else
     {
      newnode->right = start;
      start->left = newnode;
      start = newnode;
     }
     cap++;
     return start->value;
     //display();
}

int popLeft()
{
    struct node *tmp = start;
    start = start->right;
    //cout<<tmp->value<<endl;
    int v = tmp ->value;
    free(tmp);
    cap--;
    return v;
}

int pushRight(int data)
{
    node *newnode = new node;
    newnode->value = data;
    newnode->left = NULL;
    newnode->right = NULL;

    if(rear == NULL)
    {
        rear = newnode;
        start = newnode;
        cout<<rear->value<<endl;
    }
    else
    {
        rear->right = newnode;
        newnode->left = rear;
        rear = newnode;
        //cout<<rear->value<<endl;
    }
    cap++;
    return rear->value;
}

int popRight()
{
    node *tmp = new node;
    tmp = rear;
    rear = rear->left;
    int v = tmp->value;
    //cout<<tmp->value<<endl;
    free(tmp);
    cap--;
    return v;
}

int queue_size_check()
{
    return cap;
}

void display()
{
    struct node *tmp = new node;
    tmp = start;
    while(tmp!=NULL)
    {
        cout<< tmp->value<<"\t";
        tmp = tmp->right;

        if(tmp->right == NULL)
            break;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        cap = 0;
        int q_size,n_commands;
        cin>>q_size>>n_commands;

        while(n_commands--)
        {
            string a;
            int b;
            cin>>a;

            if(a == "pushLeft"){
                cin>>b;
                if(queue_size_check() == q_size)
                    cout<<"The queue is full"<<endl;
                else
                cout<<"Pushed in left: "<<pushLeft(b)<<endl;
              //  display();

            }
            else if(a == "popLeft")
            {
              if(queue_size_check() == 0)
                    cout<<"The queue is empty"<<endl;
              else
              cout<<"Popped from left: "<<popLeft()<<endl;
            //  display();
            }

            else if(a == "pushRight")
            {
                cin>>b;
                if(queue_size_check() == q_size)
                    cout<<"The queue is full"<<endl;
                else
                {
                    int result = pushRight(b);
                cout<<"Pushed in right: "<<result<<endl;
                }
                //display();
            }
            else{

              if(queue_size_check() == 0)
                    cout<<"The queue is empty"<<endl;
              else
                cout<<"Popped from left: "<<popRight()<<endl;
                //display();
            }
        }
    }
}

