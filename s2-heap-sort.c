#include <stdio.h>

void heapify(int a[], int n, int i) {
    int largest = i, l = 2*i + 1, r = 2*i + 2, temp;

    if(l < n && a[l] > a[largest])
        largest = l;

    if(r < n && a[r] > a[largest])
        largest = r;

    if(largest != i) {
        temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        heapify(a, n, largest);
    }
}

void heapsort(int a[], int n) {
    // Build max heap
    for(int i = n/2 - 1; i >= 0; i--)
        heapify(a, n, i);

    // Extract elements
    for(int i = n - 1; i > 0; i--) {
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        heapify(a, i, 0);
    }
}

int main() {
    int a[50], n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    heapsort(a, n);

    for(int i=0;i<n;i++)
        printf("%d ", a[i]);

    return 0;
}
