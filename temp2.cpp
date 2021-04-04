#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int flag = 1;
		if(s.length()<=1)
			cout<<"NO"<<endl;
		else{
			int start = 0,end = s.length()-1;
			while(start<end && flag = 1){
				if(s[start] == s[end]){
					s.push('p');
					flag = 0; 
				}
			}
		}
		if(flag == 0)
			cout<<"NO"
	}
	return 0;
}