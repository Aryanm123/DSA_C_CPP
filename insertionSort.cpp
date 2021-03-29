#include <bits/stdc++.h>
using namespace std;


void insertionSort(int arr[],int n){
	for(int i=1;i<n;i++){
		int j=i-1;
		int temp = arr[i];
		while(j>=0 && arr[j]>temp){
			arr[j+1] = arr[j];
			j--;
		}
				
		arr[j+1] = temp;
	}
}

int main(){
	int arr[] = {21,4,15,36,90,45,12};
	insertionSort(arr,7);
	for(int x:arr)
		cout<<x<<"  ";
	return 0;
}