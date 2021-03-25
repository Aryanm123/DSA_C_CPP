#include <bits/stdc++.h>
using namespace std;

int main(){
	stack<int> s1;
	stack<int> s2;
	int arr[] = {10,20,12,34,78};
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
		s1.push(arr[i]);

	//Now delete
	if(s2.empty()){
		if(s1.empty())
			return 10;
		else{
			while(!s1.empty()){
				s2.push(s1.top());
				s1.pop();
			}
		}
	}

	else{
		while(!s2.empty()){
			cout<<s2.top()<<endl;
			s2.pop();
		}
	}
	return 0;
}