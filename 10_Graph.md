# Graph
## With 인접행렬
```cpp
#include<cstdio>

int G[10][10];

int main(){

    int v, e;
    scanf("%d %d", &v, &e);

    for(int i = 0, v1, v2 ; i <= e ; ++ i){
        scanf("%d %d", &v1, &v2);
        G[v1][v2] = G[v2][v1] = 1;
    }

}
```

## With 인접리스트
```cpp
#include<cstdio>
#include<vector>

std::vector<int> G[10];

int main(){

    int v, e;
    scanf("%d %d", &v, &e);

    for(int i = 0, v1, v2 ; i <= e ; ++ i){
        scanf("%d %d", &v1, &v2);
        G[v1].push_back(v2)
    }

}
```
#
## 각 구조의 저장 방식

|구조|저장방식|
|----|----|
|인접행렬|` G[a][b1, b2, b3] = 1`|
|인접리스트|` G[a] = [b1, b2, b3]`|