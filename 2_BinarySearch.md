# 이진탐색
```cpp
int left = 1;
int right = n;
int mid = (right + left)/2

while(left <= right){
    mid = (right + left)/2;
    if(arr[mid] == key){
        break;
    }
    else if(arr[mid] < t){
        left = mid + 1;
    }
    else{
        right = mid - 1;
    }
}

if(l <= r){
    printf("%d", mid);    
} else {
    printf("-1");
}
```