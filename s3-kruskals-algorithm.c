#include <stdio.h>
#include <stdlib.h>

struct Edge {
    int u, v, w;
} e[20];

int parent[10], n, m;

int find(int x) {
    if(parent[x] != x) parent[x] = find(parent[x]);
    return parent[x];
}

void union_set(int a, int b) {
    parent[find(a)] = find(b);
}

int main() {
    int i, j, sum=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++) parent[i]=i;

    for(i=0;i<m;i++)
        scanf("%d %d %d",&e[i].u,&e[i].v,&e[i].w);

    // Sort edges by weight
    for(i=0;i<m-1;i++)
        for(j=i+1;j<m;j++)
            if(e[i].w > e[j].w){
                struct Edge t = e[i]; e[i] = e[j]; e[j] = t;
            }

    for(i=0;i<m;i++){
        if(find(e[i].u) != find(e[i].v)){
            printf("%d - %d : %d\n", e[i].u, e[i].v, e[i].w);
            sum += e[i].w;
            union_set(e[i].u, e[i].v);
        }
    }
    printf("Total cost: %d\n", sum);
    return 0;
}
