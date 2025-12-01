#include <stdio.h>
#define INF 999
int main() {
    int n, i, j, k, min, u, v;
    scanf("%d", &n);
    int cost[10][10], selected[10] = {0};
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&cost[i][j]);

    selected[0] = 1;
    for(k=0;k<n-1;k++){
        min = INF;
        for(i=0;i<n;i++){
            if(selected[i]){
                for(j=0;j<n;j++){
                    if(!selected[j] && cost[i][j] < min){
                        min = cost[i][j]; u=i; v=j;
                    }
                }
            }
        }
        printf("%d - %d : %d\n", u, v, cost[u][v]);
        selected[v] = 1;
    }
    return 0;
}
