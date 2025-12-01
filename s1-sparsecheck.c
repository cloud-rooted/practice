#include <stdio.h>

int main() {
    int a[10][10], m, n, i, j, count = 0;

    scanf("%d %d", &m, &n);

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            if(a[i][j] == 0)
                count++;

    if(count > (m * n) / 2)
        printf("Sparse Matrix");
    else
        printf("Not Sparse");

    return 0;
}
