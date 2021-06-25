```cpp
#include<iostream>

void swap(int* a, int* b);
void m_sort(int *arr, int start, int end, int n);

int main(){
    int n;
    std::cin >> n;
    int *arr = new int[n];

    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }

    m_sort(arr,0,n-1,n);

    for(int i=0;i<n;i++){
        std::cout << arr[i]<<' ';
    }
    delete[] arr;
}

void swap(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void m_merge(int *arr, int start, int middle, int end, int n){
    int *temp_arr = new int[n];

    int i = start;
	int j = middle + 1;
	int k = start;
	
	while(i <= middle && j <= end){
		if(arr[i] <= arr[j]){
            temp_arr[k] = arr[i];
            ++i;
        } else {
            temp_arr[k] = arr[j];
            ++j;
        }
		k++;
	}
	
    if(i > middle){
		for(int t = j; t <= end; ++t){
			temp_arr[k] = arr[t];
	        ++k;
		}
	} else {
		for(int t = i; t <= middle; ++t){
			temp_arr[k] = arr[t];
			++k;
		}
	}
	
	for(int t = start; t <= end; ++t){
		arr[t] = temp_arr[t];
	}
    delete[] temp_arr;
}

void m_sort(int *arr, int start, int end, int n){
    if(start < end){
		int middle = (start + end) / 2;

		m_sort(arr, start, middle, n);
		m_sort(arr, middle+1, end, n);
        
		m_merge(arr, start, middle, end, n);
	}
}
```
