#include <bits/stdc++.h>
using namespace std;


void selectionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
	
		int k=i;
		for(int j = i+1;j<n;j++){
			if(arr[j]<arr[k]){
				k = j;
			}
		}
		swap(arr[i],arr[k]);
	}
}

int main(){
	int arr[] = {21,4,15,36,90,45,12};
	selectionSort(arr,7);
	for(int x:arr)
		cout<<x<<"  ";
	return 0;
}
