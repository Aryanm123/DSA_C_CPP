#include <iostream>
using namespace std;


void merge(int arr[],int l,int mid,int h){
	int arr2[h+1];
	int i=l,j=mid+1,k=l;
	while(i<=mid && j<=h){
		if(arr[i]<arr[j])
			arr2[k++] = arr[i++];
		else
			arr2[k++] = arr[j++];
	}
	while(i<=mid)
			arr2[k++] = arr[i++];
	while(j<=h)
			arr2[k++] = arr[j++];

	for(int i=l;i<=h;i++)
		arr[i] = arr2[i];	


}
void mergeSort(int arr[],int l,int h){
	int mid;
	if(l<h){
		mid = (l+h)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,h);
		merge(arr,l,mid,h);
	}
}
int main(){
	int arr[] = {56,2,45,13,12,98,89,565,65};
	mergeSort(arr,0,8);
	for(int x:arr)
		cout<<x<<" ";
	return 0;
}
