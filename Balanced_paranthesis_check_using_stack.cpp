#include <bits/stdc++.h>
using namespace std;
int checkParanthesis(char *arr){
	stack<char> s;
	for(int i=0;i<strlen(arr);i++){
		if(arr[i] == '(' || arr[i] == '{' || arr[i] == '[')
			s.push(arr[i]);
		else if(arr[i] == ')' || arr[i] == '}' || arr[i] == ']')	{
			if(s.empty()){
				cout<<"Not balanced "<<endl;
				return -2;
			}
			else{
				if(arr[i] == ')'){
					char item = s.top();
					s.pop();
					if(item!='('){
						cout<<"Not balanced"<<endl;
						return -2;
					}
						
				}
				else if(arr[i] == '}'){
					char item = s.top();
					s.pop();
					if(item!='{'){
						cout<<"Not balanced"<<endl;
						return -2;
					}
						
				}
				else{
					char item = s.top();
					s.pop();
					if(item!='['){
						cout<<"Not balanced"<<endl;
						return -2;
					}
				}
				
			}
			
		}
	}
	if(!s.empty())
		cout<<"Not balanced"<<endl;
	else
		cout<<"Balanced"<<endl;
		
	return 100;	
}
int main(){
	char *arr = "}{" ;
	 checkParanthesis(arr);
	return 0;
}
