#include<iostream>
using namespace std;


void binSearch(int l,int h,int arr[],int key){
	while(l<=h){
		int mid = l+(h-l)/2 ;
		if(arr[mid] == key){
			cout<<mid<<endl;
			return ;
		}
			
		else if(arr[mid]>key)
			h = mid-1;
		else
			l = mid+1;		
	}
}

void binSearch2(int l,int h,int arr[],int key){
	while(h-l>1){
		int mid = l + (h-l)/2 ;
		if(arr[mid] == key){
			cout<<mid<<endl;
			return ;
		}
			
		else if(arr[mid]>key)
			h = mid-1;
		else
			l = mid+1;		
	}
	
	if(arr[l] == key)
		cout<<l<<endl;
	else if(arr[h]==key)
		cout<<h<<endl;	
}
int main(){
	int key;
	cin>>key;
	int arr[10] = {10,20,30,40,50,60,70,90,100,200};
	int l= 0 ,h = 9;
	
	binSearch2(0,9,arr,key);
	
//	cout<<"Key not found"<<endl;
	return 0;
}
