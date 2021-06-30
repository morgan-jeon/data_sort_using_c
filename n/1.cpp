#include<cstdio>
#include<iostream>

using namespace std;

void swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void display(int* arr, int n){
	for(int i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void merge(int* arr, int left, int right, int n){
	cout << "MERGE CALLED " << left << " " << right << endl;

	int* tmp_arr = new int[n]{};

	int middle = (left + right)/2;

	int i = left;
	int j = middle+1;
	int ti = left;

	while(i <= middle && j <= right){
		if(arr[i] <= arr[j]){
			tmp_arr[ti] = arr[i];
			i++;
		} else {
			tmp_arr[ti] = arr[j];
			j++;
		}
		ti++;
		display(tmp_arr, n);
	}

	if(i > middle){
		for(int t= j; t <= right; t++){
			tmp_arr[ti] = arr[t];
			ti++;
		}
	} else {
		for(int t=i; t <= middle; t++){
			tmp_arr[ti] = arr[t];
			ti++;			
		}
	}

	for(int t = left; t <= right; ++t){
		arr[t] = tmp_arr[t];
	}

	delete[] tmp_arr;
}

void m_sort(int* arr, int start, int end, int n){
	if(start < end){
		int middle = (start + end) / 2;
		m_sort(arr, start, middle, n);
		m_sort(arr, middle+1, end, n);
		merge(arr, start, end, n);
	}
}

int main(){
	int n;
	scanf("%d", &n);
	int* arr = new int[n];
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	display(arr, n);
	m_sort(arr, 0, n-1, n);
	display(arr, n);

	delete[] arr;
}
