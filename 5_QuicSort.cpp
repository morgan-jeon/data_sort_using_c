#include <cstdio>

void swap(int* a, int* b){
    int tmp = *b;
    *b = *a;
    *a = tmp;
}

void display(int* arr, int n){
    for(int j = 0; j < n; j++){
        printf("%d ", arr[j]);
    }
    printf("\n");
}

void qsort(int* arr, int left, int right, int n){
    if( left >= right){
        return;
    }

    int pi = left;
    int pivot = arr[left];

    int low = left + 1;
    int high = right;

    while( low <= high )
    {
        while(arr[low] <= pivot && low <= right){
            low++;
        }
        while(arr[high] > pivot && high > left){
            high--;
        }
        if(low < high){
            swap(&arr[low], &arr[high]);
        } else {
            swap(&arr[pi], &arr[high]);
        }
        display(arr, n);
    }
    pi = high;

    qsort(arr, left, pi-1, n);
    qsort(arr, pi+1, right, n);
}

int main(){
    int n;
    scanf("%d", &n);
    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    display(arr, n);
    qsort(arr, 0, n-1, n);
    return 0;
}
