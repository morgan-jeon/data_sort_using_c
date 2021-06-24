# 선택정렬
```cpp
void s_sort(int *arr, int n){
    //// Selection Sort
    int min=0;
    for(int i=0; i<n-1; ++i){
        min = i;
        for(int j=i+1; j<n; ++j){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(&arr[i], &arr[min]);
    }
}
```

# 버블정렬
```cpp
void b_sort(int* arr, int n){
    //// Bubble Sort
    for(int i=0; i<n-1; ++i){
        for(int j=0; j<n-i; ++j){
            if(arr[j] < arr[j-1]){
                swap(&arr[j], &arr[j-1]);
            }
        }
    }
}
```
# 삽입정렬
```cpp
void i_sort(int* arr, int n){
    //// Insertion
    for(int i=0;i<n;++i){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(&arr[j],&arr[j-1]);
            j = j-1;
        }
    }
    ////
}
```