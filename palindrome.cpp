#include<bits/stdc++.h>
#include<numeric>
#define rep(i,n) for(int i=0; i<(int)n; i++)
#define repp(i,k,n) for(int i = k; i<=(int)n; i++)
#define si(n) scanf("%d",&n);
#define sc(n) scanf("%c",&n);
#define sl(n) scanf("%lld",&n);
#define print(n) printf("%d",n);
#define print_ll(n) printf("%lld",n);
#define pb(x) push_back(x)
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
#define pmp make_pair
#define uu first
#define vv second

using namespace std;

struct node{
int val;
struct node *next;
}*start = NULL,*curr;


void insert(int value)
{
    struct node *newnode = new node;
    newnode->val = value;
    newnode->next = NULL;

    if(start == NULL)
    {
        start = newnode;
        curr = newnode;
    }
    else {
        curr->next = newnode;
        curr = newnode;
    }
}



void display()
{
        //displaying list
    struct node *tmp = new node ;
    tmp = start;
    while(tmp)
    {
        cout<<tmp->val<<"->";
        tmp = tmp->next;
    }
    cout<<endl;

}

//int front = 0;
int rear = 0;
int arr[50];
void push_stack(int data)
{
    arr[rear] = data;
    ++rear;
}

int pop_stack()
{
    --rear;
    return arr[rear];

}

int stack_size()
{
    return rear;
}

bool palindrome_check()
{
  struct node *tmp = start;
  while(rear > 0 && tmp)
  {
      if(tmp->val != pop_stack())
        return false;

        tmp = tmp->next;

  }
  return true;
}

int main()
{


 int n;
 cin>>n;
int val;

 rep(i,n){
 cin>>val;
 insert(val);

 if(i >= (n/2))
 push_stack(val);

 display();
 }

 bool pal = palindrome_check();

    if(pal)
        cout<<"This is a palindrome number"<<endl;
    else
        cout<<"This is not a palindrome number"<<endl;


return 0;
}
