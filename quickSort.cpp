#include <bits/stdc++.h>
using namespace std;


int partition(int arr[],int l,int h){
	int i=l,j=h-1;
	int pivot = l;
	do{
		while(arr[i]<=arr[pivot]) i++;
		while(arr[j]>arr[pivot])  j--;
		if(i<j)
			swap(arr[i],arr[j]);
	}while(i<j);
	swap(arr[j],arr[pivot]);
	return j;
}
void quickSort(int arr[],int l,int h){
	int j;
	if(l<h){
		j = partition(arr,l,h);
		quickSort(arr,l,j);
		quickSort(arr,j+1,h);
	}
}
int main(){
	int arr[] = {21,4,15,36,90,45,12};
	quickSort(arr,0,7);
	for(int x:arr)
		cout<<x<<"  ";
	return 0;
}
