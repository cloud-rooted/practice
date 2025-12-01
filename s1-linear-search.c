#include <stdio.h>

int main() {
    int a[50], n, key, i;
    scanf("%d", &n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&key);

    for(i=0;i<n;i++)
        if(a[i]==key){ printf("Found"); return 0; }

    printf("Not Found");
}
