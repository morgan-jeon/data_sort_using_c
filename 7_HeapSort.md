```cpp
#include <cstdio>

void swap(int* a, int* b){
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

void heapify(int* arr, int i, int n){
    int child = 2*i + 1;

    if( child < n && arr[child] < arr[child+1] ){
        child++;
    }

    if( arr[i] < arr[child]){
        swap(&arr[i], &arr[child]);
    }

    if( child <= n / 2){
        heapify(arr, child, n);
    }
}

void display(int* arr, int n){
    for(int j = 0; j < n; j++){
        printf("%d ", arr[j]);
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    int* arr = new int[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Build Max Heap
    for(int i = n/2; i >= 0; i--){
        heapify(arr, i, n);
    }

    // Heap Sort
    for(int i = n-1; i >= 0; i--){
        display(arr, n);

        swap(&arr[0], &arr[i]);
        int root = 0;
        int child = 1;

        while (child < i)
        {
            child = 2*root + 1;

            if(child < i-1 && arr[child] < arr[child+1]){
                child++;
            }

            if( child < i && arr[root] < arr[child]){
                swap(&arr[root], &arr[child]);
                root = child;
            } else {
                break;
            }

        }    
    }

    display(arr, n);
    return 0;
}
```
