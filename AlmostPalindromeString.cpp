#include <bits/stdc++.h>
using namespace std;

bool helper(string s,int l,int r){
	while(l<r){
		if(s[l]!=s[r])
			return false;
		l++;
		r--;
	}
	return true;
}
	bool isPalindrome(string s){
		if(s.length()<=2)
			return true;
		int l=0,r = s.length()-1;
		while(l<r){
			if(s[l]!=s[r]){
					bool ans1 = helper(s,l+1,r);
					bool ans2 = helper(s,l,r-1);
					return ans1 || ans2;

				}
				l++;
				r--;
			}
			return true;
	}
int main(){
	string s = "abcedba";
	cout<<boolalpha<<isPalindrome(s)<<endl;
	return 0;
}
