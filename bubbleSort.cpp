#include <bits/stdc++.h>
using namespace std;


void bubbleSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1])
				swap(arr[j+1],arr[j]);
		}
	}
}

int main(){
	int arr[] = {21,4,15,36,90,45,12};
	bubbleSort(arr,7);
	for(int x:arr)
		cout<<x<<"  ";
	return 0;
}