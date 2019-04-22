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

struct player {
 int id;
 struct player *next;

}*start,*current;
void cll(int n, int k)
{
    start = new player;
    current = new player;
    start->id = 1;
    start->next = NULL;
    current = start;

    repp(i,2,n)
    {
        player *newnode = new player;
        newnode->id = i;
        newnode->next = NULL;
        current->next = newnode;
        current = newnode;
        //cout<<current->id<<endl;
    }
    current->next = start;

    player *tmp;
    tmp = new player;
    tmp = start;

    //cout<<"start"<<start->id<<endl;

    while(tmp->id != n){
        cout<<tmp->id<<endl;
        tmp = tmp->next;

    }

    player *tmp = new player;
    tmp = start;

    repp(i,1,k)
    tmp = tmp->next;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int k;
    cin>>k;

    cll(n,k);

    return 0;
}
