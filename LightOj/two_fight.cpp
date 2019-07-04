#include<iostream>

using namespace std;

#define rep(i,n) for(int i = 0; i < int(n); i++)
#define repp(i,m,n) for(int i = m; i <= int(n); i++)

#define maxv 100001
struct edgenode
{
    int y;
    int weight;
    struct edgenode *next;
    
};



 struct graph
{
    edgenode *edges[maxv];
    int nedge;
    int nvertex;
    bool directed;
};


void initialize_graph(graph *g, bool directed)
{
  g->directed = directed;
  g->nedge = 0;
  g->nvertex = 0;

  for(int i = 0; i < maxv; i++) g->edges[i] = 0;
}

void insert_graph(graph *g, int u, int v,bool directed)
{
edgenode *p = new edgenode();
p->y = v;
p->weight = 0;
p->next = g->edges[u];

g->edges[u] = p;

if(directed == false)
insert_graph(g,v,u,true);
else g->nedge++;

}

void read_graph(graph *g, bool directed)
{
    int m;
    initialize_graph(g,directed);

    cout<<"No of edges: ";
    cin>>m;
    cout<<endl;

    //input connected nodes;
    repp(i,1,m)
    {
        int u, v;
        cin>>u>>v;
        
        int max;
        if(u > v)
        max = u;
        else max = v;

        if(max > g->nvertex)
        g->nvertex = max;

        insert_graph(g,u,v,directed);
    }
}

// queue implementation

struct queue
{
   int arr[maxv];
   int front, rear;
   int queue_size;
};

void init_queue(queue *q)
{
    q->front = 1;
    q->rear = 0;
    q->queue_size = 0;
}
void enqueue(queue *q, int value)
{
    q->arr[++q->rear] = value;
    q->queue_size++;
}

int dequeue(queue *q)
{
    int value =  q->arr[q->front];
    q->front++;
    q->queue_size--;
    return value;
}

int top(queue *q)
{
    return q->arr[q->front];
}

bool empty(queue *q)
{
    if(q->queue_size <= 0)
    return true;
    else return false;
}


int visited[maxv], parent[maxv], level[maxv];


void init_bfs()
{
    rep(i,maxv) visited[i] = 0;
}

int check_fighter(int u, int v)
{
    if(fighter_type[u] == 1) return 2;
    if(fighter_type[u] == 2) return 1;
}
//
int lykan = 0;
int vampire = 0;
int fighter_type[100001];

int bfs(graph *g, queue *q, int start)
{
    init_queue(q);
   enqueue(q,start);
   visited[start] = 1;
   level[start] = 0;
   parent[start] = -1;
   fighter_type[start] = 1;
   vampire++;

   while(empty(q) == false){
       int u = dequeue(q);
       edgenode *p = g->edges[u];
       while(p  != NULL){
           int v = p->y;
           if(visited[v] == 0){
               if(check_fighter(u,v) == 1) vampire++;
               if(check_figher(u,v) == 2) lykan++;
           enqueue(q,v);
           parent[v] = u;
           level[v] = level[u] + 1;
           visited[v] = 1;
           }
           p  = p->next;
       }
   }
   
   if(vampire > lykan) return vampire;
   else return lykan;

}

// lykan = 1
// vampire = 2;

void two_fight(graph *g)
{
   rep(i,1,g->nvertex)
   {
       if(visited[i] == false)
       {

           cout<<bfs(g,q,i)<<endl;
       }
   }
}

int main(int argc, char const *argv[])
{
    graph *g = new graph();
    initialize_graph(&g,false);
    read_graph(&g,false);
    init_bfs();
    two_fight(g);
    return 0;
}
