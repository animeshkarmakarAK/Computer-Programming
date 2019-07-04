/* solved by- myself   solved complete*/ 
#include<bits/stdc++.h>

using namespace std;
#define qii queue<int>

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int tc = 1; tc <= t; tc++)
    {
        int n,m;
        cin>>n>>m;

        printf("Case %d:\n",tc);

        deque<int>q;

        while (m--)
        {
            string comm;
            cin>>comm;

            if(comm == "pushLeft")
            {
                 int value;
                cin>>value;
                if(q.size() >= n)
                cout<<"The queue is full"<<endl;
                else{
                q.push_front(value);
                cout<<"Pushed in left: "<<value<<endl;
                }
            }
            else if(comm == "pushRight")
            {
                int value;
                cin>>value;

                if(q.size() >= n) cout<<"The queue is full"<<endl;

                else{ 
                q.push_back(value);
                cout<<"Pushed in right: "<<value<<endl;
                }

            }
            else if(comm == "popLeft")
            {
                if(q.empty()) cout<<"The queue is empty"<<endl;
                else {
                    int value = q.front();
                    q.pop_front();
                    cout<<"Popped from left: "<<value<<endl;
                }
            }
            else {
                if(q.empty()) cout<<"The queue is empty"<<endl;
                else {
                    int value = q.back();
                    q.pop_back();
                    cout<<"Popped from right: "<<value<<endl;
                }
            }
        }
        

    }

    return 0;
}


/* int sz;
struct queue
{
    int arr[100];
    int front;
};

void init_queue(queue *q)
{
    q->front = 0;
}

bool check_command(char s1[], char s2[])
{
    for(int i = 0; (s1[i] != '\0' || s2[i] != '\0'); i++){
        if(s1[i] != s2[i])
        return false;
    }
    return true;
}

void push_left(queue *q, int value, int n)
{
    if(sz => n) cout<<"queue is full"<<endll;
    else {
    q->arr[q->front] = value;
    sz++;
    }
}

void push_right(queue *q, int value, int n)
{
    if(sz => n) cout<<"queue is full"<<endll;
    else {
    q->arr[q->front] = value;
    sz++;
    }
}

int pop_left(queue *q)
{
    if(sz <= 0) return 0;

    int value = q->arr[q->front];
    q->front--;
    return value;
}


int pop_right(queue *q)
{
    if(sz <= 0) return 0;
    int value = q->arr[q->front];
    q->front--;
    return value;
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;

    for(int tc = 1; tc < t; tc++){

        queue *lq = new queue();
        queue *rq = new queue();
        sz = 0;

        init_queue(lq);
        init_queue(rq);


        int n,m;
        while (m--)
        {
            char command[100];
            cin>>command;

            if(check_command(command, "pushLeft"))
            {
                int value;
                cin>>value;
                push_left(lq,value,n);
                

            }
            else if(check_command(command,"pushRight")){
                int value;
                cin>>value;
                push_right(rq,value,n);
            }
            else if(check_command(command,"popLeft"){
                pop_left(lq);
            }
            else if(check_command(command,"popRight"))
            pop_right(rq);
        }
        

    }
    return 0;
}

*/
