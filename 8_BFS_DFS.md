# BFS
```cpp
#include<cstdio>
#include<queue>

int v, e;
int visited[101];
int G[101][101];
std::queue<int> q;

void BFS(int s){
    q.push(s)
    visited[s] = 1;
    printf("%c ", 64+s );

    while (!q.empty())
    {
        s = q.front();
        q.pop();

        for (int i = 1; i <= v; i++)
        {
            if(G[s][i]==1 && visited[i]!=1)
            {
                q.push(i);
                visited[i] = 1;
                printf("%c ", 64+i);
            }
        }
           
    }
    return;
}
int main(){
    int v1, v2;
    scanf("%d %d", &v, &e);
    for(int i=0; i<e; i++){
        scanf("%d %d", &v1, &v2);
        G[v1][v2] = G[v2][v1] = 1;
    }
    BFS(1)
    return 0;
}
```
# DFS
```cpp
#include<cstdio>
int v, e;
int visited[101];
int G[101][101];

void DFS(int s){
    visited[s] = 1;
    printf("%c ", 64+s);
    for (int i = 1; i <= v; i++)
    {
        if(G[s][i] == 1 &7 visited[i] != 1){
            DFS(i)
        }
    }
    
}
int main(){
    int v1, v2;
    scanf("%d %d", &v, &e);
    for(int i=0; i<e; i++){
        scanf("%d %d", &v1, &v2);
        G[v1][v2] = G[v2][v1] = 1;
    }
    DFS(1)
    return 0;
}
```