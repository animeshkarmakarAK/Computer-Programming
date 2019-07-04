/*Comment : solved by myself */


#include<bits/stdc++.h>

using namespace std;
#define pii pair<int,int>

int row,col;

int x[] = {1,-1,0,0};
int y[] = {0,0,1,-1};
int visited[22][22];
char graph[22][22];

int bfs(int sx, int sy)
{
    int land_cnt = 0;
    memset(visited, 0, sizeof(visited));
    visited[sx][sy] = 1;
    ++land_cnt;
    queue<pii>q;
    q.push(pii(sx,sy));

    while(!q.empty()){
        pii top = q.front();
        q.pop();

        for(int k = 0; k < 4; k++){
            int tx = top.first + x[k];
            int ty = top.second + y[k];

            if((tx > 0 && tx <= row) && (ty > 0 && ty <= col) && (graph[tx][ty] != '#') && graph[tx][ty] != '@' && visited[tx][ty] == 0)
            {
                land_cnt++;
                q.push(pii(tx,ty));
                visited[tx][ty] = 1;
            }
        }
        
    }
    return land_cnt;

}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;

    for(int tc = 1; tc <= t; tc++){

        int land_cnt = 0;
        cin>>col>>row;
        //char graph[row][col];
        int start_row , start_col;

        for(int i = 1; i <= row; i++){
            for(int j = 1; j <= col; j++){
                cin>>graph[i][j];

                if(graph[i][j] == '@'){
                start_row = i;
                start_col = j;
                }
            }
        }
        //cout<<"start = "<<start_row<<"end_row = "<<start_col<<endl;
    
       int cnt =  bfs(start_row, start_col);
        cout<<"Case "<<tc<<": "<<cnt<<endl;

    }
    return 0;
}
